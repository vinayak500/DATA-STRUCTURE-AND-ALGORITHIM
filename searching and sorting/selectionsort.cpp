#include<iostream>
using namespace std;

void selectionsort(int a[] , int n){

   for(int i = 0; i<=n-2;i++){
    int min = a[i];
    int min_indx = i;
       for(int j = i ; j<=n-1;j++){
            if(a[j]<min){
                min = a[j];
                min_indx = j;
            }
       }


       int temp = a[i];
       a[i] = a[min_indx];
       a[min_indx] = temp;
   }


}



int main(){
   
    int n;
    cin>>n;

    int array[100];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    selectionsort(array , n);

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }



}