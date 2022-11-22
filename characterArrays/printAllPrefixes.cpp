#include<iostream>
using namespace std;

int length(char a[]){
    int count = 0;
    for(int i=0;a[i]!='\0'; i++){
        count++;
    }
    return count;
}

void printAllprefixes(char a[] , int len){
    for(int i=0; i<=len-1;i++){
        for(int j=0 ;j<=i ; j++){
            cout<< a[j];
        }
        cout<<endl;
    }
}


int main(){
    char a[] = "abcd";
    int len = length(a);
    printAllprefixes(a , len);
}