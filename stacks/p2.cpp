#include<iostream>
using namespace std;

class stack{
    public:
        int *arr;
        int top;
        int size;


        stack(int size){
            this -> size = size;
            arr = new int[size];
            top = -1;
        }
  
    void push(int element){
            if(size - top >1){
                top++;
                arr[top] = element;
            }else{
                cout<<"Stack Overflow";
            }
    }



    void pop(){
          if(top>=0){
            top--;
          }else{
            cout<<"Stack Underflow";
          }
    }


    int peek(){
      if(top<0){
        cout<<"stack is empty";
        return -1;
      }else{
        return arr[top];
      }
    }


    bool empty(){
       if(top==-1){
        return true;
       }else{
        return false;
       }


    }


};


int main(){

  stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

//   s.push(60);

   s.pop();

   cout<<s.peek() <<endl;


   if(s.empty()){
    cout<<"stack is empty"<<endl;
   }else{
    cout<<"stack is not empty"<<endl;
   }

    s.pop();
     s.pop();
      s.pop();
       s.pop();

        if(s.empty()){
    cout<<"stack is empty";
   }else{
    cout<<"stack is not empty";
   }


}