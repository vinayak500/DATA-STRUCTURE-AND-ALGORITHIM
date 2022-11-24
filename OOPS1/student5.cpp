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


     //default constructor called
    student(){
        cout<<"constructor called!"<<endl;
    }


    //parametrized constructor called
    // this contains address of the calling object
    student(int r){
       this ->  rollno = r;
        cout<<"parameterized constructor called"<<endl;
    }

    student(int r , int a){
       this -> rollno = r;
        this -> age = a;
        cout<<"parameterized constructor called"<<endl;
    }

   ~student(){
    cout<<"destructor called!"<<endl;
   }

};