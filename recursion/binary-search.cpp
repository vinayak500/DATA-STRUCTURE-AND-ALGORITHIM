#include<iostream>
using namespace std;

int binarysearch(int a[] , int s , int e , int key){

     if(s>e){
        return -1;
     }


      int mid = (s+e)/2;

      if(a[mid] == key){
        return mid;
      }

      if(a[mid] > key){
        binarysearch(a, 0 , mid-1 , key);
      }else{
        binarysearch(a, mid+1 , e , key);
      }


}

int main(){

   int a[] = {10,20,30,40,50};
   int n = 5;
   int key;
   cin>>key;

   cout<< binarysearch(a, 0 , n-1, key);



}