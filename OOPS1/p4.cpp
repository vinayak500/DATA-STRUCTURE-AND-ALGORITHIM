#include<iostream>
using namespace std;
#include "student4.cpp"

int main(){


   student s1;
   s1.display();

   student *s2 = new student();
   s2 -> display();

    student s3(10);
    s3.display();

     student *s4 = new student(100);
   s4 -> display();

   student s5(20,200);
   s5.display();

   student *s6 = new student(100 , 256);
   s6 -> display();

}