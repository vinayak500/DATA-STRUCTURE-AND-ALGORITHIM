#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> stack;
    
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        
        if(ch == '(' || ch == '+' || ch == '-' || ch=='*' || ch=='/'){
            stack.push(ch);
        }else{
                bool isRedundant = true;
            if(ch==')'){
                while(stack.top()!='('){
                     char top = stack.top();
                    if(top == '+' || top == '-' || top=='*' || top=='/' ){
                        isRedundant = false;
                    }
                    stack.pop();
                }   
                
                if(isRedundant == true){
                    return true;
                }
                stack.pop();
            }   
        }      
    }
    return false;
}