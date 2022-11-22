#include<iostream>
using namespace std;
#include "student2.cpp"


int main(){
     student s1;

     s1.rollno = 100;
    // age is private property , so i cant access
    //  s1.age = 10;


    s1.display();
    cout << s1.getAge() <<endl;


     student *s6 = new student;
     (*s6).rollno = 20;
     // s6 -> rollno = 20
     //s6 -> display() 
     // s6 -> getAge()

     (*s6).display();
     cout<< (*s6).getAge() <<endl;
}