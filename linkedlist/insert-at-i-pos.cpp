#include<iostream>
using namespace std;
#include "Node.cpp"


Node* insert(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!= -1){
      
      Node* newnode = new Node(data);

      if(head==NULL){
        head = newnode;
        tail = newnode;
      }else{
        tail -> next = newnode;
        tail = tail -> next;
        // OR tail = newnode;
      }
        cin>>data;
    }

   return head;

}

void print(Node* head){
	   Node* temp = head;
	   while(temp!=NULL){
		   cout<<temp->data<<" ";
		   temp = temp->next;
	   }
   }

Node* insertNode(Node* head , int i , int data){

   Node* newnode = new Node(data);
   int count = 0;
   Node* temp = head;

//to first at beginning
   if(i=0){
    newnode -> next = head;
    head = newnode;
    return head;
   }

// count to traverse till the node , where you want to insert
   while(temp!=NULL && count<i-1){
    temp = temp->next;
    count++;
   }


//temp = null signifies you reached till the last , so dont insert
   if(temp!=NULL){
       Node* a = temp->next;
       temp->next = newnode;
       newnode->next = a;
   }
  return head;
}

int main(){
  
 Node* head =  insert();
  print(head);

  int data;
  int i;
  cin>>data>>i;
  head = insertNode(head , i , data);
  print(head);

}
