#include<iostream>
#include<stack>
using namespace std;


void insertAtBottom(stack<int>& s , int ele){
    //BASE CASE
        if(s.empty()){
            s.push(ele);
            return;
        }
    
    int num = s.top();
    s.pop();
    
    //RECURSCIVE CALL
    insertAtBottom(s,ele);
    
    s.push(num);
}




void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty())
        return;
    
    int num = stack.top();
    stack.pop();
    
    //RECURSIVE CALL
    reverseStack(stack);
    
    insertAtBottom(stack,num);
}

int main(){

     stack<int> s;

       s.push(5);
        s.push(9);
         s.push(12);
          s.push(8);
           s.push(4);

           reverseStack(s);

            int size = s.size();
           for(int i=0;i<size ; i++){
            cout<<s.top()<<" ";
            s.pop();
           }
}