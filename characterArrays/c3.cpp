#include<iostream>
#include<cstring>
using namespace std;

int main(){

//   char a[100] = "hello world";
// to get length of the string 
//   int len = strlen(a);
//   cout<<len;

   

//    char input1[100] = "abcd";
//    char input2[100] = "abdd";
// compare the two string 
// return 0 which means both string are same
// any other number means string are not equal
//    cout<<strcmp(input1 , input2);



  char input1[100] = "hello";
  char input2[100] = "hi";

//strcpy( dest_strg , sourc_strg)
// strcpy(dest_strg , "hello")  this is also valid
     strncpy(input1 , input2 , 3);


     //strcpy( dest_strg , sourc_strg , number of character to copy)
    

     cout<<input1;


    return 0;
}