#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
       int data;
       node* left;
       node* right;


    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

node* buildtree(node* root){

 int data;
 cout<<"enter the data "<<endl;
 cin>>data;
 root = new node(data);

 if(data==-1){
    return NULL;
 }

 cout<<"enter the data for inserting in left of " << data <<endl;
 root->left = buildtree(root->left);

 cout<<"enter the data for inserting in right of " << data <<endl;
 root->right = buildtree(root->right);

return root;
}



// void levelorder(node* root){

//     //add root in the queue
//        queue<node*> q;
//        q.push(root);

// //until queue is empty 
//        while(!q.empty()){
//              node* temp = q.front();
//              cout<<temp->data<<" ";
//              q.pop();

// //if left node exists add it
//              if(temp->left){
//                 q.push(temp->left);
//              }

// //if right node exists add it
//              if(temp->right){
//                 q.push(temp->right);
//              }

//        }

// }



void levelorder(node* root){

    //add root in the queue
       queue<node*> q;
       q.push(root);
       q.push(NULL);

//until queue is empty 
       while(!q.empty()){
             node* temp = q.front();
             q.pop();

             if(temp==NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
             }else{
             cout<<temp->data<<" ";
                //if left node exists add it
             if(temp->left){
                q.push(temp->left);
             }

//if right node exists add it
             if(temp->right){
                q.push(temp->right);
             }

    }



       }

}

void inorder(node* root){
    //base case
    if(root==NULL)
     return;

     inorder(root->left);
     cout<< root->data <<" ";
     inorder(root->right);
}


void preorder(node* root){
    //base case
    if(root==NULL)
     return;

      cout<< root->data <<" ";
     preorder(root->left);
     preorder(root->right);
}


void postorder(node* root){
    //base case
    if(root==NULL)
     return;

     postorder(root->left);
     postorder(root->right);
     cout<< root->data <<" ";
}

void buildfromlevelorder(node* &root){
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }


         cout<<"enter right node for "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}


int main(){

  node* root = NULL;
//   root = buildtree(root); 

  buildfromlevelorder(root);
  //1 3 5 7 11 17 -1 -1 -1 -1 -1
   
   cout<<"printing level order traversal"<<endl;
levelorder(root);


}