#include<iostream>
using namespace std;

int main(){
    int i=100;
    cout<< &i <<endl;

    int* p = &i;
    cout<<p<<endl;


    cout<< *p <<endl;
    cout<< sizeof(p) <<endl;


    // float f = 10.2;
    // float * address_pointer = &f;
    // cout<< &f <<endl;
    // cout<< address_pointer<<endl;


    int *pp = 0;
    //null pointer
    //not pointing to anything
}