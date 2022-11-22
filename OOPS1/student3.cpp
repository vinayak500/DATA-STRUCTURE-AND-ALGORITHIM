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

   void setAge(int a){
    age = a;
   }

   void display(){
    cout<<rollno << " "<<age<<endl;
   }

};