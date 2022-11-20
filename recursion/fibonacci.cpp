#include<iostream>
using namespace std;

int fibo(int n){

  if(n==0 || n==1){
    return n;
  }

    int smalloutput1 = fibo(n-1);
    int smalloutput2 = fibo(n-2);

    return smalloutput1 + smalloutput2;
}


int main(){
    int n;
    cin>>n;

    cout<<"fibonacci:"<<fibo(n);
}