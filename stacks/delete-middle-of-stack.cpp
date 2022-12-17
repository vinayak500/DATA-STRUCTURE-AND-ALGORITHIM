#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s , int count , int size){
   
   if(count>=size/2){
    s.pop();
    return;
   }

   int num = s.top();
   s.pop();

  //RECURSIVE CALL
   solve(s,count+1,size);

//after deleting mid ele , while returning add back remaing elements
   s.push(num);

}

void deleteMiddle(stack<int>& s , int n){
         solve(s , 0 , n);
}




int main(){

    stack<int> s;

       s.push(5);
        s.push(9);
         s.push(12);
          s.push(8);
           s.push(4);

           deleteMiddle(s,5);

            int size = s.size();
           for(int i=0;i<size ; i++){
            cout<<s.top()<<" ";
            s.pop();
           }
}