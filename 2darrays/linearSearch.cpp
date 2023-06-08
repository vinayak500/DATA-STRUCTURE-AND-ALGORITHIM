#include<iostream>
using namespace std;

int linearSearch(int a[][3] , int target , int n , int m){
       for(int row = 0 ; row<n ; row ++){
           for(int col=0;col<m;col++){
            if(a[row][col]==target){
                return 1;
            }
           }
       }
       return 0;
}


int main(){

int a[3][3];

//taking input
for(int row = 0 ; row<3;row++){
    for(int col=0;col<3;col++){
        cin>>a[row][col];
    }
}


int target;
cout<<"enter the target"<<endl;
cin>>target;

if( linearSearch(a,target,3,3)){
     cout<<"element found";
}else{
  cout<<"element not found";
}


}