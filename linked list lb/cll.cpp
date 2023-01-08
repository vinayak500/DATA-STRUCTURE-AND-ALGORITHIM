#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* next;

       Node(int d){
        this -> data = d;
        next = NULL;
       }
};

void insertNode(Node* &tail , int element ,int d){
       //empty list
       if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
       }else{
        //non-empty list
      
       Node* curr = tail;

       while(curr->data != element){
          curr = curr->next;
       }


       Node* temp = new Node(d);
       temp -> next = curr->next;
       curr -> next = temp;


       }
}

void print(Node* &tail){

     if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
     }

     Node* temp = tail;
     do{
        cout<< tail->data << " ";
        tail = tail->next;
     }while(temp != tail);

     cout<<endl;
}

void deleteNode( int value , Node* &tail){

   if(tail==NULL){
    cout<<"list is empty , please check again"<<endl;
    return;
   }else{
    //non - empty case

// assuming the value is present in the linked list
 Node* prev = tail;
  Node* curr = prev->next;

  while(curr->data != value){
    prev = curr;
    curr = curr->next;
  }

   prev -> next = curr->next;
    
    //1 node linked list
    if(curr == prev){
        tail = NULL;
    }

// 2 or more node linked list
   if(tail == curr){
    tail = prev;
   }
   curr -> next = NULL;
   delete curr;

   }


}


int main(){
      Node* tail = NULL;

      insertNode(tail , 5 , 3);
      print(tail);

       insertNode(tail , 3 , 5);
      print(tail);

       insertNode(tail , 5 , 10);
      print(tail);
          insertNode(tail , 5 , 8);
      print(tail);

      deleteNode(5,tail);
      print(tail);

        deleteNode(3,tail);
      print(tail);

       deleteNode(10,tail);
      print(tail);
         deleteNode(8,tail);
      print(tail);
   
}