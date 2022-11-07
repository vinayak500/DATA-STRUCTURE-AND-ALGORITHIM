#include<iostream>
using namespace std;

//to get the floating point in the square number
double moreprecision(int n , int precision , int tempsol ){

    double ans = tempsol;
    double factor = 1;

    for(int i=0;i<precision;i++){
                 factor = factor/10;
                 //0.1
                 //0.01
                 //0.001


                 // ccheck for 6.1 6.2 6.3 6.4 .... so om
                 // the check for 6.01 , 6.02 , 6.03 , 6.04 , 6.05.... so on
             for(int j=ans ; j*j < n ; j=j+factor){
                       ans = j;
                  }
    }

    return ans;
}




int squarenum(int n){

     int s = 0;
     int e = n;

     int ans = -1;

     while(s<e){
          int mid = (s+e)/2;
           int square = mid * mid;

           if(square == n){
            return ans;
           }
           
         if(square > n){
                e = mid-1;
           } else if(square < n){
               ans = mid;
               s = mid+1;
           }
     }

     return ans;
}




int main(){

    int n;
    cin>>n;

    cout<< squarenum(n) <<endl;



}