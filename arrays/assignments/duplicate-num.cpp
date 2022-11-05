#include<iostream>
using namespace std;

 int duplicatenum(int a[] , int n){
   
   //brute force
//    for(int i=0;i<=n-2;i++){
//         int count = 0;

//         for(int j=0;j<n;j++){
//             if(a[j] == i){
//                 count++;
//             }
//         }

//         if(count==2){
//             return i;
//         }
//    }


   int ans = 0;
   for(int i=0;i<n;i++){
    ans = ans ^ a[i];
   }


   for(int i=0;i<=n-2;i++){
    ans = ans^i;
   }

    return ans;
}






int main(){

   int array[100];
   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    cin>>array[i];
   }
   

   cout<<duplicatenum(array , n);



}