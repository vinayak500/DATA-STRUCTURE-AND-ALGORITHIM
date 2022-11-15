#include<iostream>
using namespace std;


int main(){
 
 int a[100];

 cout<< a <<endl;
 cout<< &a[0] <<endl;
  
    a[0] = 10;
    a[1] = 20;


    cout<< *a <<endl;
    cout<< *(a+1) <<endl;


    cout << sizeof(a)  <<endl;
    cout<< &a <<endl;


    int *p = &a[0];
    cout<<p<<endl;


    cout << sizeof(a)  <<endl;
    cout<< sizeof(p)   <<endl;


    p=p+1;
    //a=a+1; cant change a value a stores the starting address of array (which u cannot change in symbol table)


    return 0;
}