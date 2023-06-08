#include<iostream>
using namespace std;

int printArray(int* a , int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}


int main(){

    int n;
    cin>>n;
   
    int num[100];
    cout<<"enter the number:";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    for(int i=n-1;i>=0;i--){
         if(num[i]<9){
            num[i]++;
            printArray(num,n);
            return 0;
         }
         num[i] = 0;
    }

    int b[100];
    for(int i=0;i<n+1;i++){
        b[i]=0;
    }
      b[0]=1;
    printArray(b,n+1);


}