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

bool isPalindrome(Node* head){
    vector<int> arr;

    Node* temp = head;
    while(temp!=NULL){
       arr.push_back(temp->data);
       temp = temp->next;
    }

    return checkPalindrome(arr);
}

int checkPalindrome(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    
    while(s<e){
        if(arr[s]!=arr[e]){
            return 0;
        }
    }
  return 1;
}