#include<iostream>
using namespace std;
#include "Node.cpp"


void print(Node* head){
	   Node* temp = head;
	   while(temp!=NULL){
		   cout<<temp->data<<" ";
		   temp = temp->next;
	   }
   }



int main(){


Node n1(20);
Node n2(30);
Node n3(40);
Node n4(50);
Node n5(60);

n1.next = &n2;
n2.next = &n3;
n3.next = &n4;
n4.next = &n5;

Node* head = &n1;

/*
   Node* head = &n1;
   cout<< head-> data <<endl;
   head = head -> next;
 cout<< head-> data <<endl;
    head = head->next;
    cout<< head-> data <<endl;

*/
     print(head);
}
