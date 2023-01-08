#include<iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node* prev;

       Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
       }

       ~Node(){
    int val = this->data;
    if(next != NULL){
        delete next;
        next = NULL;
    }
    cout<<"memory free for node with data" << val<<endl;
       }
};

void insertAtHead(Node* &head , Node* &tail,int d){

 if(head==NULL){
       Node* temp = new Node(d);
       head = temp;
       tail = temp;
 }else{
              Node* temp = new Node(d);
 temp -> next = head;
 head -> prev = temp;
  head = temp;
 }


}


void insertAtTail(Node* &head ,Node* &tail , int d){

  if(tail==NULL){
 Node* temp = new Node(d);
 tail=temp;
 head = temp;
  }else{
    Node* temp = new Node(d);

   tail -> next = temp;
   temp -> prev = tail;

   tail = temp;
  }



}

void insertAtanyposition(Node* &head , Node* &tail ,int pos , int d){
    //insert at starting position
     if(pos==1){
        insertAtHead(head,tail,d);
        return;
     }


    Node* temp = head;
    int count = 1;

    while(count<pos-1){
            temp = temp->next;
            count++;
    }

//inserting at last position
       if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
       }


//inserting at d position
     Node* nodetoinsert = new Node(d);

     nodetoinsert -> next = temp->next;
     temp -> next -> prev = nodetoinsert;

     temp -> next = nodetoinsert;
     nodetoinsert->prev = temp;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deleteNode(int position , Node* &head){
      if(position==1){
        Node* temp = head;
        head = head->next;

        temp->next=NULL;
        head->prev = NULL;
        delete temp;
      }else{

      Node* curr = head;
      Node* prev = NULL;

      int cnt = 1;
      while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
      }

      prev -> next = curr->next;
      if(curr->next!=NULL){
      curr->next->prev = prev;
      }
      curr->next = NULL;
      curr->prev = NULL;
      delete curr;

      }
}





int getlength(Node* head){
    Node* temp = head;
    int count = 0; 
    while(temp!=NULL){
        count = count + 1;
        temp = temp->next;
    }
    return count;
}

int main(){

   Node* node1 = new Node(10);
   Node* head = node1;
   Node* tail = node1;

   print(head);
//    cout<< getlength(head) <<endl;

   insertAtHead(head,tail,20);
   print(head);

      insertAtHead(head,tail,30);
         insertAtHead(head,tail,40);

print(head);

 insertAtTail(head,tail,50);
  insertAtTail(head,tail,60);
  print(head);

  insertAtanyposition(head,tail,2,100);
  print(head);

  deleteNode(7,head);
  print(head);

}