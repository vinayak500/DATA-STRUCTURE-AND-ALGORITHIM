#include<iostream>
#include<climits>
using namespace std;


int main(){

   int array[100];

   int n;
   cin>>n;


   for(int i=0;i<n;i++){
    cin>>array[i];
   }


   int max = INT_MIN;
   for(int i=1;i<n;i++){
    if(array[i]>max){
        max=array[i];
    }
   }

   cout<<"Max:"<<max;

}