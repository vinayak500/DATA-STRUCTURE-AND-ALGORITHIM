#include<iostream>
using namespace std;

int main(){

    char a[100];

    // cin>>a;
    // cout<<a;


    cin>>a;
    a[4] = 'x';
    a[5] = 'd';

    cout<<a;

//cout will keep reading characters until it find a null character.

// in case of interger array , cout<<a , leads to address
// int b[100];
// cout<<a;

// char p[100];
// cin>>p;
// cout<<p;
// in case of string , cout<<p outputs the charcter in array one by one until it finds null character.

    return 0;
}