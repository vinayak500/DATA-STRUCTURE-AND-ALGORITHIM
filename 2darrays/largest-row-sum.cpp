#include<iostream>
using namespace std;

void rowWiseSum(int a[][3] , int n , int m ){
      for(int row=0;row<n;row++){
        int sum = 0;
        for(int col=0;col<m;col++){
           sum = sum + a[row][col];
        }
        cout<< sum << " ";
      }
}


void columnWiseSum(int a[][3] , int n , int m ){
      for(int col=0;col<m;col++){
        int sum = 0;
        for(int row=0;row<n;row++){
           sum = sum + a[row][col];
        }
        cout<< sum << " ";
      }
}



int largestRowSum(int a[][3] , int n , int m ){

        int max = 0;

      for(int row=0;row<n;row++){
        int sum = 0;
        for(int col=0;col<m;col++){
           sum = sum + a[row][col];
        }
       
        if(sum>max){
            max = sum;
        }

      }

      return max;
}


int main(){

 int a[3][3];

 //taking input
 for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        cin>>a[row][col];
    }
 }


cout<<"row wise sum "<<endl;
rowWiseSum(a,3 , 3);
cout<<endl;
cout<<"column wise sum "<<endl;
columnWiseSum(a , 3, 3);


cout<<endl;
cout<<"largest row sum : "<< largestRowSum(a , 3 , 3);


}