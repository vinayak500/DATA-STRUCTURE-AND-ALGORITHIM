#include<iostream>
#include<stack>
using namespace std;

int main(){
  
  stack<int> s;

  //push operation
  s.push(2);
  s.push(5);

  cout<< s.top()  <<endl;

  //pop operation
  s.pop();

  cout<<s.top()<<endl;

   if(s.empty()){
    cout<<"stack is empty";
   }else{
    cout<<"stack is not empty";
   }

   cout<< "stack size is " << s.size() <<endl;



}