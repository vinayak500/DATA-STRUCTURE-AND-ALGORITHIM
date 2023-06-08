#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int a[100];
    cout<<"enter the number of elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the key";
    int key;
    cin>>key;
    int flag = 0;
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(key==a[i]){
           flag = 1;
           break;
        }
    }

  if(flag==1){
    cout<<"element found";
  }else{
    cout<<"element not found";
  }
   return 0;
}