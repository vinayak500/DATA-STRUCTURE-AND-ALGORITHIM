#include<iostream>
using namespace std;

int linearsearch(int a[] , int n , int x){
    for(int i=0;i<n;i++){
        if(a[i] == x ){
            return i;
        }
    }

    return -1;
}




int main(){

    int array[100];

    int n;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>array[i];
    }

int x;
cin>>x;

    cout<<linearsearch(array,n,x);
}