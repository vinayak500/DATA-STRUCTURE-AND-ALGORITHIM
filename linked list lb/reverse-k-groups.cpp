#include<iostream>
#include<vector>
using namespace std;

class Node{
      public:
        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

Node* kReverse(Node* head , int k){
    if(head==NULL)
       return NULL;

//step 1:reverse k nodes
       int count = 0;
       Node* next = NULL;
       Node* cur = head;
       Node* prev = NULL;

       while( count < k && cur!=NULL){
            next = cur-> next;
            cur->next = prev;
            prev = cur;
            cur = next;
            count++;
       }

//step 2:recursion dekhlega aage ka
    if(next!=NULL)
      head->next = kReverse(next,k);

//step 3:return head of reversed list
      return prev;
}