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


int getlength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head-> next;
    }
    return len;
}

Node* getMiddle(Node* head){
    int len = getlength(head);
    int ans = (len /2) + 1;
    int count = 1;

//   int ans = (len /2);
//     int count = 0;

    Node* temp = head;
    while(count<ans){
        temp = temp->next;
        count++;
    }
    return temp;
}



Node* mid(Node* head){

    //0 or 1 node
    if(head==NULL || head->next == NULL )
      return head;

   //2 node
      if(head->next->next == NULL)
         return head->next;

         //more than 2 node
         Node* slow = head;
         Node* fast = head->next;

         while(fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
         }
      return slow;
}