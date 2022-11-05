#include<iostream>
#include<climits>
using namespace std;

void arrayIntersection(int input1[] , int input2[] , int size1 , int size2){
     for(int i=0;i<size1;i++){

         for(int j=0;j<size2;j++){
               if(input1[i] == input2[j]){
                cout<<input1[i]<<" ";
                input2[j] = INT_MIN;
                break;
               }
         }

     }
}



int main(){


    int a[1000];
    int b[1000];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

     arrayIntersection(a,b,n,m);
}