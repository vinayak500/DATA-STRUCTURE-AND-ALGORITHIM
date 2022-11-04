#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;

  int a[100];

  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int si = 0;
  int ei = n-1;

  while(si<ei){
    //do swap
    int temp = a[si];
    a[si] = a[ei];
    a[ei] = temp;
    si++;
    ei--;
  }


  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

}