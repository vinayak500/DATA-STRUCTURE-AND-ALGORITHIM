#include<iostream>
using namespace std;

int function1(int a[] , int size , int x , int count){

    if(size==0){
        return -1;
    }

    if(a[0]==x){
        return count;
    }

    int smalleroutput = function1(a+1,size-1,x , count+1);
    return smalleroutput;


}


int main(){
     int a[] = {10,3,3,4,5};
     cout<<function1(a,5,5,0);
}