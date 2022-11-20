#include<iostream>
using namespace std;

void sort01(int arr[] , int n){
    int s = 0;
    int e = n-1;

    while(s<e){

         while(arr[s]==0){
            s++;
         }

         while(arr[e]==1){
            e--;
         }


         if(s<e){
            //do swap
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++;
            e--;
         }

    }
}



int main(){
    int arr[] = {1,0,1,1,1,0};


    sort01(arr , 6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}