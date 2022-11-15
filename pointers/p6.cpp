#include<iostream>
using namespace std;

int sum(int* a , int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans + a[i];
    }
    return ans;
}




int main(){
    int a[100];
     
     cout<<a<<endl;

     int size;
     cin>>size;

     for(int i=0;i<size;i++){
         cin>>a[i];
     }
     cout<< sum(a+2,3) <<endl;
}
