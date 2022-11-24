#include<iostream>
using namespace std;
#include "student5.cpp"

int main(){

//    student s1(100,200);
//    cout<<"s1:"<<endl;
//    s1.display();

//   // copy constructor
//   // creates a object taking/coping values from another object

//    student s2(s1);
//    cout<<"s2:"<<endl;
//    s2.display();

//    student *s3 = new student(20 , 30);
//    cout<<"s3:"<<endl;
//    s3->display();

//    student s4(*s3);
//    cout<<"s4:"<<endl;
//    s4.display();

//    student *s5 = new student(*s3);
//    cout<<"s5:"<<endl;
//    s5 -> display();

//    student *s6 = new student(s1);
//    cout<<"s6:"<<endl;
//    s6 -> display();

  cout<<" ------------------------------------"<<endl;
   //copy assignment operator copies all values of one object to another object


   student s7(100,200);
   student s8(99,123);

   student *s9 = new student(12 , 45);
  student *s10 = new student(45 , 67);

    s7 = s8;
    s7.display();

    *s9 = s8;
    s9 -> display();

    s7 = *s10;
    s7.display();

    //when program terminates destructor is called on all statically created objected and its memory will be cleaned
    // so only statically created objects will be cleaned

    /// for dynamically created object , we need to call delete
    delete s9;
    delete s10;

}
