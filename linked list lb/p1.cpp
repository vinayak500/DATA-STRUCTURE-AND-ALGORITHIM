#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;

//construct
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this->next!=NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data"<< this->data<<endl;
    }

};


void InsertAtHead(Node* &head , int d){
     
     Node* temp = new Node(d);
     temp->next = head;
     head = temp;

}


void InsertAtTail(Node* &tail, int d){

     Node* temp = new Node(d);
     tail -> next = temp;
     tail = temp;
}

void insertAtPosition(Node* &head , Node* &tail , int pos , int d){

//insert at starting position
     if(pos==1){
        InsertAtHead(head,d);
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
        InsertAtTail(tail,d);
        return;
       }


//inserting at d position
     Node* nodetoinsert = new Node(d);

     nodetoinsert -> next = temp->next;
     temp->next = nodetoinsert;

}

void deleteNode(int position , Node* &head){
    //deleting starting node
    if(position == 1){
            Node* temp = head;
             head = head -> next;
             temp->next = NULL;
             delete temp;

    }else{
        //delete any node middle node or last node
           Node* curr = head;
           Node* prev = NULL;
            int cnt = 1;
            while(cnt<position){
                prev = curr;
                curr = curr -> next;
                cnt++;
            }
            prev->next = curr->next;
            curr -> next = NULL;
            delete curr;
    }
}



void print(Node* &head){
       Node* temp = head;

       while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
       }
       cout<<endl;
}



int main(){

    Node* node1 = new Node(10);

    cout<< node1->data <<endl;
    cout<< node1->next <<endl;

     Node* head = node1;
     Node* tail = node1;
     print(head);

     InsertAtTail(tail,25);
     print(head);

     InsertAtHead(head,12);
     print(head);

      InsertAtHead(head,15);
     print(head);

      insertAtPosition(head ,tail, 2 , 30);
      print(head);

       insertAtPosition(head,tail,6, 50);
       print(head);

    return 0;
}