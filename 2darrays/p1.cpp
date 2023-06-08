#include<iostream>
using namespace std;


int main(){

 int a[3][4];

//row wise
//taking input
 for(int row = 0 ; row < 3 ; row ++){
    for(int col = 0 ; col < 4 ; col++){
        cin>>a[row][col];
    }
 }

//display output
  for(int row = 0 ; row < 3 ; row ++){
    for(int col = 0 ; col < 4 ; col++){
       cout<<a[row][col] << " ";
    }
    cout<<endl;
 }


//column wise
// for(int col=0;col<4;col++){
//     for(int row=0;row<3;row++){
//         cin>>a[row][col];
//     }
// }



//     for(int row=0;row<3;row++){
//         for(int col=0;col<4;col++){
//        cout<<a[row][col]<< " ";
//     }
//     cout<<endl;
// }


//2d array intialisation
int b[2][3] = {1 , 2 , 3 , 4 , 5 , 6};
int c[2][2] = { {3,4} , {5,6} };


}