#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    s.push(-1);
    
    vector<int> ans(n);
    
    for(int i=n-1;i>=0;i--){
         int cur = arr[i];
        while(s.top() >= cur){
            s.pop();
        }
        //ans is stack ka top
        ans[i] = s.top();
        s.push(cur);
    }
    return ans;
}