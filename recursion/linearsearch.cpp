#include<iostream>
using namespace std;

int linearsearch(int a[] , int size , int key){
       if(size==0){
        return -1;
       }

       if(a[0]==key){
        return 1;
       }else{
        linearsearch(a+1 , size-1 , key);
       }
}


int main(){
    int a[] = {10,20,30,40,50};
    int size = 5;
   
   int key;
   cin>>key;

    cout<<linearsearch(a , size , key);
}