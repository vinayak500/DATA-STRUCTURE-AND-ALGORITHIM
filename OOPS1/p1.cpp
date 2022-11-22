#include<iostream>
using namespace std;
#include "student.cpp"


int main(){


// statically allocated
   student s1;
   student s2;

   s1.age = 10;
   s1.rollno = 25;

   cout<< s1.age <<endl;
   cout<< s1.rollno <<endl;

//dynamically allocated
   student *s6 = new student;

    (*s6).age = 15;
    (*s6).rollno = 30;

    // s6 -> age = 30;
    // s6 -> rollno = 50;

    cout<< (*s6).age <<endl;
    cout<< (*s6).rollno <<endl;



       





}
