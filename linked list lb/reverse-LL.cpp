#include<iostream>
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

Node* reverse(Node* head){
    
    //if there is no node , then return null
    //if there is one node , no need to reverse return the head
  if(head==NULL || head->next == NULL)
    return head;

    Node* cur = head;
    Node* prev = NULL;

    while(cur!=NULL){
        Node* forward = cur->next;
        cur->next = prev;

        prev=cur;
        cur = forward;
    }
    return prev;
}
/*
Node* reverse2(Node* head){
  if(head==NULL || head->next==NULL)
    return head;


    Node* chottaHead = reverse2(head->next);
    head->next->next = head;
    head->next = NULL;

    return chottaHead;
}

Node reverse(Node* head){
  return reverse2(head);
}
*/
