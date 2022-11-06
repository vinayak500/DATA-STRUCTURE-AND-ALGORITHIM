#include<iostream>
using namespace std;

void pairsum(int a[] , int n , int s){
int count = 0;
    for(int i=0;i<n-1;i++){
        
        for(int j=i+1;j<n;j++){
                  if(a[i] + a[j] == s){
                    count = count + 1;
                  }
        }
    }

cout<<count;
}




int main(){
    int n;
    cin>>n;

    int array[1000];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int s;
    cin>>s;

    pairsum(array , n , s);
}