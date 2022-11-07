#include<iostream>
using namespace std;

int peakinmountarray(int arr[] , int n){
    int s = 0;
    int e = n-1;
    
    while(s<e){
        int mid = (s+e)/2;

        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }else{
            e=mid;
        }
    }
   return s;
}



int main(){
  
  int arr[]={1,2,5,10,6,1};


   cout<<peakinmountarray(arr,6);




}