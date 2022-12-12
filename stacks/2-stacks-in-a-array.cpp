#include<iostream>
using namespace std;

class Stack{
  
  public:
     int *arr;
     int top1;
     int top2;
     int size;

     Stack(int size){
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
     }

    void push1(int element){
           if(top2 - top1 > 1){
            top1++;
            arr[top1] = element;
           }else{
            cout<<"stack is full";
           }
    }


    void push2(int element){
        if(top2 - top1 >1){
            top2--;
            arr[top2] = element;
        } else{
            cout<<"stack is full";
        }
    }

      void pop1(){
        if(top1>-1){
            top1--;
        }else{
            cout<<"stack 1 is empty"<<endl;
        }
      }

      void pop2(){
        if(top2<size){
            top2++;
        }else{
            cout<<"stack 2 is empty"<<endl;
        }
      }
};


int main(){

    Stack s(5);

    s.push1(2);
    s.push1(4);
    s.push1(5);

    s.push2(10);
    s.push2(20);

// 2 4 5 10 20
// stack is full
    s.push2(40);

}