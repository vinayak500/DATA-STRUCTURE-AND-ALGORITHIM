#include<iostream>
using namespace std;

int binarysearch(int arr[] , int n , int key){
       int s = 0;
       int e = n-1;

       while(s<=e){
        int mid = (s + e)/2;
            if(arr[mid] == key){
                return mid;
            }else if(arr[mid]<key){
                s = mid + 1;
            }else{
                e = mid-1;
            }
       }
       return -1;
}

int findpivot(int arr[] , int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        int mid = (s + e)/2;
        if(arr[mid] >= arr[0]){
           s = mid + 1;
        }else{
          e = mid ;
        }
    }

    return s;
}


int main(){

       int arr[1000];

       int n;
       cin>>n;

       for(int i=0;i<n;i++){
        cin>>arr[i];
       }

       int pivot = findpivot(arr,n);

      int target;
      cin>>target;

      if(   arr[pivot] <= target <= arr[n-1]){
         cout<<binarysearch(arr , pivot , n-1);
      }else{
          cout<<binarysearch(arr , 0 , pivot-1);
      }




}