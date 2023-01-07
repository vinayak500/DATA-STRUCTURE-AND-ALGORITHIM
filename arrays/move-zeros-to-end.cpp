#include<iostream>
#include<vector>
using namespace std;

// void moveZerostoend(int a[] , int n){    
//     // vector<int> b(n);
//     int b[n];
//     int k = 0;
//     for(int i=0;i<n;i++){
//         if(a[i]!=0){
//             b[k] = a[i];
//             k++;
//         }
//     }

//     while(k<n){
//         b[k]= 0;
//         k++;
//     }

//     for(int i=0;i<n;i++){
//         cout<<b[i]<<" ";
//     }

// }

int findPos(int b[] , int n , int c){
    for(int i=0;i<n;i++){
        if(b[i]!=0)
        return i + c + 1;
    }
    return -1;
}

void moveZerostoend(int a[] , int n){
    for(int i=0;i<n;i++){
          if(a[i]==0){
            //find first non zero element position
            int pos = findPos(a+i+1 , n-1-i , i);
            if(pos==-1){
                return;
            }
            //swap 
            int temp = a[i];
            a[i] = a[pos];
            a[pos]= temp;
          }
    }


}



int main(){
    int a[] = {1,0,2,3,0,4,0,1};
    int n = 8;
    moveZerostoend(a,n);
    
       for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}