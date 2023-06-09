#include<iostream> 
class NStack
{

   int n , s;
   int* arr;
   int* top;
   int* next;
   int freepot;



public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // Write your code here.
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

          for(int i=0;i<n;i++){
              top[i] = -1;
          }

          for(int i=0;i<s;i++){
              next[i] = i+1;
          }

          next[s-1] = -1;

          freepot = 0;

    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.

        if(freepot == -1){
            return false;
        }
        
        int index = freepot;

        freepot = next[index];

        arr[index] = x;

        next[index] = top[m-1];

        top[m-1] = index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
          if(top[m-1]==-1){
              return false;
          }

         int index = top[m-1];
         top[m-1] = next[index];
         next[index] = freepot;

         freepot = index;
         return arr[index];



    }
};