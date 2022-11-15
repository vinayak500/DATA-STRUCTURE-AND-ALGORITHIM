#include<iostream>
using namespace std;

int main(){

   int a[] = {1,2,3};
   char b[]  ="apple";

//  a has the starting address of the array
   cout<<a<<endl;

   // here b keeps printing the character until it gets null character
   cout<<b<<endl;

    
    char* p = &b[0];

    cout<< &b[0] <<endl;
    cout<< p <<endl;


    char c1 = 'a';
    char* p2 = &c1;

//it keeps on printing until it gets null character
    cout<< c1 <<endl;
    cout<< p2 <<endl;



    char str1[] = "abcd";
    // char* str2 = "efg";  //wrong , dont do this


    return 0;
}