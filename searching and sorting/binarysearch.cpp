#include<iostream>
using namespace std;

int binarysearch(int a[] , int n , int key){
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid = (start + end)/2;

        if(a[mid]==key){
            return mid;
        }else if(a[mid] < key){
            start= mid + 1;
        }else{
            end = mid -1 ;
        }
    }

    return -1;
}



int main(){

   int n;
   cin>>n;

   int array[1000];

   for(int i=0;i<n;i++){
    cin>>array[i];
   }

    int key;
    cin>>key;

    cout<<binarysearch(array,n,key);
}