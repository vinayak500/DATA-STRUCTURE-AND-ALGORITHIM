#include<iostream>
using namespace std;
void triplesum(int a[] , int n , int s){
         for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if( (a[i] + a[j] + a[k])  == s){
                        cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;
                    }
                }

            }
         }
}


int main(){
    int n;
    cin>>n;

    int array[1000];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int s;
    cin>>s;

    triplesum(array,n,s);
}