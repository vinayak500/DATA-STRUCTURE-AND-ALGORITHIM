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

Node* removeDuplicate(Node* head){
//empty list
    if(head==NULL)
        return head;

        Node* cur = head;
        while(cur!=NULL){
            //  cur->next!= NULL check for the last node 
            //because when cur is at last node , we cannt access cur->next->data (it will give error)
          if( (cur->next!=NULL) && cur->data==cur->next->data){
                       Node* next_next = cur->next->next;
                       Node* nodetodelete = cur->next;
                       delete(nodetodelete);
                       cur->next = next_next;


                    //    Node* temp = cur->next;
                    //    cur->next = cur->next->next;
                    //    delete(temp);

          }else{
            cur = cur->next;
          }
 }
 return head;
}