#include<iostream>
using namespace std;

int function1(int a[] , int size , int x , int count){

    if(size==0){
        return -1;
    }


    int smalleroutput = function1(a+1,size-1,x , count+1);

    if(smalleroutput!=-1){
       return smalleroutput;
    }

    if(a[0]==x){
        return count;
    }

    
    return smalleroutput;


}


int main(){
     int a[] = {10,5,3,5,2};
     cout<<function1(a,5,5,0);
}