#include<iostream>
using namespace std;


void bubblesort(int a[] , int n){

   for(int j=0;j<n-1;j++){
      for(int i=0;i<n-1-j ; i++){
        if( a[i] > a[i+1] ){
            //do swap
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
      }
   }

}


int main(){
   
   int array[100];

   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    cin>>array[i];
   }

   bubblesort( array , n);

   for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
   }


  

}