#include<iostream>
using namespace std;

int length( char a[]){
    int count = 0;
    for(int i=0;a[i]!='\0' ; i++){
        count++;
    }
    return count;
}


void reverse(char a[] , int len){
    int s = 0;
    int e = len -1 ;
    while(s<e){
        char temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}


int main(){
    char a[100];
    cin.getline(a , 100);

    int len = length(a);
    reverse(a , len);
    cout<< a <<endl;
}