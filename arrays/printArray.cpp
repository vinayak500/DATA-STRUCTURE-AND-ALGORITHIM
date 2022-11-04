#include<iostream>
using namespace std;

void printArray(int a[] , int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}




int main(){

int a[100];

int n;
cin>>n;

 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 

  printArray(a,n);


}