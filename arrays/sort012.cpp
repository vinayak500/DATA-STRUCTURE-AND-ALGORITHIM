#include<iostream>
using namespace std;

void sort(int a[] , int n){

    int low = 0;
    int mid = 0 ;
    int high = n-1;


    while(mid<=high){
       if(a[mid]==0){
        swap(a[mid] , a[low]);
        low++;
        mid++;
       }

       if(a[mid]==1){
        mid++;
       }

       if(a[mid]==2){
        swap(a[mid] , a[high]);
        high--;
       }
    }   
}




int main(){


   int a[] = {0,1 , 1, 2 , 0 , 1, 2 , 0};
    sort(a,8);


   for(int i=0;i<8;i++){
    cout<<a[i]<<" ";
   }






}