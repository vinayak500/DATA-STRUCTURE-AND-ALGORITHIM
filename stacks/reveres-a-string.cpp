#include<iostream>
#include<stack>
using namespace std;

int main(){
  
  stack<char> s;

  string str = "vinayak";

  for(int i=0;str[i]!='\0';i++){
    char ch = str[i];
    s.push(ch);
  }

  string ans = "";
  while(!s.empty()){
    char ch = s.top();
     ans.push_back(ch);
     s.pop();
  }

cout<<ans;

}