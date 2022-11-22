#include<iostream>
using namespace std;
#include "student3.cpp"

int main(){
    student s1;
    s1.rollno = 30;
    s1.setAge(100);
    s1.display();

    student *s6 = new student;
    (*s6).rollno = 40;
    s6 -> setAge(50);
    s6 -> display();

}