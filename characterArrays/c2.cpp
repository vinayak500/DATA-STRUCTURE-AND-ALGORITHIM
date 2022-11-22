#include<iostream>
using namespace std;

int main(){

//  char a[100];
//  // when u write 5 , it reads only 4 character last character is always default
// cin.getline(a,5);
//  cout<<a;


  char input[100];
  // take input upto 9 characters at max , but if u encounter 'o' character stop it
  cin.getline(input , 10 , 'o');
  cout<<input;


    return 0;
}