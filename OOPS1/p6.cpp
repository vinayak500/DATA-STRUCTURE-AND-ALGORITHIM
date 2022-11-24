#include<iostream>
using namespace std;
#include "student5.cpp"

int main(){
    student s1;  //default constructor

    student s2(10); //constructor 1

    student s3(145 , 678); //constructor 2

    s1 = s2 ; // copy assignment operator

    student s4 = s3; 
    // student s4; // first default constructor is called , next s4 = s3
    // similar to student s4(s3);
}