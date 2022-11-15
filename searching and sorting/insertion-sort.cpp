#include<iostream>
using namespace std;

void insertionsort(int a[] , int n){


    for(int i=1;i<n;i++){
        int j;
        int current=a[i];
              for(j=i-1;j>=0;j--){
                      if(current<a[j]){
                        //move the number to right
                        a[j+1] = a[j];
                      }else{
                        break;
                      }
              }
              a[j+1] = current;
    }

}



int main(){
   
    int n;
    cin>>n;

    int array[100];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    insertionsort(array , n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }



}