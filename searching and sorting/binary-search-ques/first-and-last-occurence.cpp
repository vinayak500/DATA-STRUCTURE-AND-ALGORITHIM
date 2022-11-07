#include<iostream>
using namespace std;

int firstocc(int arr[] , int n , int k){
 
 int s = 0;
 int e = n-1;
 int ans = -1;
 while(s<=e){
    int mid = (s+e)/2;

    if(arr[mid]==k){
         ans = mid;
         e = mid-1;
    }
    else if(arr[mid]>k){
              e = mid-1;
    }else{
          s = mid + 1;
    }
 }

   return ans;
}



int lastocc(int arr[] , int n , int k){
 
 int s = 0;
 int e = n-1;
 int ans = -1;
 while(s<=e){
    int mid = (s+e)/2;

    if(arr[mid]==k){
         ans = mid;
         s = mid+1;
    }
    else if(arr[mid]>k){
              e = mid-1;
    }else{
          s = mid + 1;
    }
 }

   return ans;
}




int main(){


     int arr[5] = {1,2,3,3,5};

     pair<int,int> p;

     p.first = firstocc(arr,5,3);
     p.second = lastocc(arr,5,3);

     cout<<p.first<<endl;
     cout<<p.second<<endl;

      cout<<"total occurence = "<< (p.second - p.first) + 1 ; 
}