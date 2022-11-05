#include<iostream>
using namespace std;

void swapAlternate(int arr[] , int size){
      for(int i=0;i<size;i+=2){
           if(i+1 < size){
            //do swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
           }
      }
}

void printArray(int arr[] , int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  

  //1st approach
  // int n;
  // cin>>n;

  // int a[100];

  // for(int i=0;i<n;i++){
  //   cin>>a[i];
  // }

  // if(n%2==0){
  //   for(int i=0;i<=n-2;i=i+2){
  //       //do swap
  //       int temp = a[i];
  //       a[i] = a[i+1];
  //       a[i+1] = temp;
  //   }
  // }else{
  //    for(int i=0;i<=n-3;i=i+2){
  //       //do swap
  //       int temp = a[i];
  //       a[i] = a[i+1];
  //       a[i+1] = temp;
  //   }
  // }


  //  for(int i=0;i<n;i++){
  //   cout<<a[i]<<" ";
  //  }





     int even[8] = {10,34,56,78,89,10,6,7};
     int odd[5] = {23,46,78,56,91};

     swapAlternate(even , 8);
     printArray(even , 8);

     cout<<endl;


     swapAlternate(odd , 5);
     printArray(odd , 5);

}