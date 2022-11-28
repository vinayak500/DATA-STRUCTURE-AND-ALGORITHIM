#include<iostream>
using namespace std;
#include "Node.cpp"



int main(){


 //statically
  Node n1(1);
  Node n2(2);

  Node* head = &n1;


  // inside next pointer variable of node 1 add the address of n2
  n1.next = &n2;

  cout<< n1.data<< " "<< n2.data<< endl;
  cout<< head-> data ;


  //dynamically
  Node* n3 = new Node(20);
   Node* n4 = new Node(30);
 
 Node* head2 = n3;

 n3 -> next = n4;

cout<< head2->data ;



}