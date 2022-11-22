#include<iostream>
using namespace std;

class student{

    private:
    int age;

    public:
     int rollno;

   int getAge(){
    return age;
   }

   void display(){
    cout<<rollno << " "<<age<<endl;
   }

};