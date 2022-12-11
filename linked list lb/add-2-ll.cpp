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

    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }


        void insertAtTail(struct Node* &head, struct Node* &tail, int val) {
        
        Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }

Node* addtwoll(Node* first , Node* second){
 
 Node* ansHead = NULL;
 Node* ansTail = NULL;
int carry = 0;

   while(first!=NULL && second!=NULL){
     int sum = carry + first->data + second->data;
     int digit = sum % 10;
     insertAtTail(ansHead,ansTail,digit);
     carry = sum/10;
   }

    while(first!=NULL){
     int sum = carry + first->data;
     int digit = sum % 10;
     insertAtTail(ansHead,ansTail,digit);
     carry = sum/10;
   }

   while(second!=NULL){
     int sum = carry + second->data;
     int digit = sum % 10;
     insertAtTail(ansHead,ansTail,digit);
     carry = sum/10;
   }

   while(carry!=0){
      int sum = carry;
      int digit = sum%10;
       insertAtTail(ansHead,ansTail,digit);
       carry = sum/10;
   }

   return ansHead;
}

Node* addtwollapprach2(Node* first , Node* second){
 
 Node* ansHead = NULL;
 Node* ansTail = NULL;
int carry = 0;
   while(first!=NULL || second!=NULL || carry!=0){


     int val1 = 0;
  if(first!=NULL){
    val1 = first->data;
  }

  int val2 = 0;
  if(second!=NULL){
    val1 = second->data;
  }

     int sum = carry + val1 + val2;
     int digit = sum % 10;
     insertAtTail(ansHead,ansTail,digit);
     carry = sum/10;
   }

 if(first!=NULL){
    first = first->next;
  }

  if(second!=NULL){
    second = second->next;
  }

   return ansHead;
}


Node* add(Node* first , Node* second){
  
  first = reverse(first);
  second = reverse(second);
    Node * ans = addtwoll(first,second);
    ans = reverse(ans);
    return ans;
}


