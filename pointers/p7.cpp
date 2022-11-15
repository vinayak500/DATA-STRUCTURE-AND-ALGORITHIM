#include<iostream>
using namespace std;

void increment1(int** p){
    p = p+1;
    cout<<p;
}


void increment2(int** p){
    (*p) = (*p) + 1;
    cout<<(*p);
}


void increment3(int** p){
    (**p) = (**p) + 1;
    cout<<(**p);
}


int main(){

   int a = 10;
   int* p1 = &a;
   int** p2 = &p1;


   cout<<&a<<endl;
   cout<<p1<<endl;


   cout<<a<<endl;
   cout<<*p1<<endl;
   cout<<**p2<<endl;



     cout<<"passing double pointer in function:"<<endl;
     cout<<p2<<endl;
     increment1(p2);
     cout<<endl;
     cout<<p2<<endl;



     cout<<"....";
    //  cout<<p1<<endl;
    //  increment2(p2);
    //  cout<<endl;
    //  cout<<p1<<endl;

      cout<<"------";
      cout<<a<<endl;
      increment3(p2);
      cout<<endl;
      cout<<a<<endl;
}