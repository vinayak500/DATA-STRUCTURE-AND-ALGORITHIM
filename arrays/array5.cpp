#include<iostream>
using namespace std;

void increment(int array[] , int n , int a){
    array[0]++;
    a++;
}



int main(){
   int array[10] = {1,2,3,4,5};
   int a = 10;


   increment(array ,10 , a );

//we are passing value of the variable 
//we are passing the address of the array

   cout<< array[0]<<endl;
   cout<< a;



}