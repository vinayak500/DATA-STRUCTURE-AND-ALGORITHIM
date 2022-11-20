#include<iostream>
using namespace std;



// 10 9 8 ..... 1
void print(int n){

if(n==0){
    return;
}

    cout<<n<<" ";
    print(n-1);
}



//1 2 3 ..... 10
// void print(int n){

// if(n==0){
//     return;
// }

   
//     print(n-1);
//      cout<<n<<" ";
// }


int main(){

   int n;
   cin>>n;

  print(n);

}