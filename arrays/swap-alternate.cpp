#include<iostream>
using namespace std;

int main(){
  
  int n;
  cin>>n;

  int a[100];

  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  if(n%2==0){
    for(int i=0;i<=n-2;i=i+2){
        //do swap
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
  }else{
     for(int i=0;i<=n-3;i=i+2){
        //do swap
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
  }


   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }



}