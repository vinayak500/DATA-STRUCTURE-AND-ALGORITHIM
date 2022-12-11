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


Node* getmid(Node* head){

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

bool isPalindrome(Node* head){
     if(head->next=NULL)
       return true;

 //find middle
   Node* middle = getmid(head);

//reverse the list after middle
   Node* temp = middle->next;
   middle->next = reverse(temp);

//compare both halves
   Node* head1 = head;
   Node* head2 = middle->next;

   while(head2!=NULL){
    if(head1->data != head2->data )
        return false;
    

    head1 = head1->next;
    head2 = head2->next;
   }

   temp = middle->next;
   middle->next = reverse(temp);
   return true;
}