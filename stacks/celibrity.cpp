#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

 bool knows(vector<vector<int>>&M , int a , int b , int n){
        if(M[a][b]==1)
        {
            return true;
        }else{
            return false;
        }
    }
    
    
    
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        
        int candidate = s.top();
        
        bool rowcheck = false;
        int zerocount =0;
        
        for(int i=0;i<n;i++){
            if(M[candidate][i]==0){
                zerocount++;
            }
        }
        
        if(zerocount==n){
            rowcheck = true;
        }
        
        bool colcheck = false;
        int onecount =0;
        
        for(int i=0;i<n;i++){
            if(M[i][candidate]==1){
                onecount++;
            }
        }
        
        if(onecount==n-1){
            colcheck=true;
        }
        
        
        if(colcheck == true && rowcheck == true){
            return candidate;
        }else{
            return -1;
        }
        
        
        
    }

