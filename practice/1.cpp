 #include<iostream>
 using namespace std;
 
   double power(double x , int n){
         if(n==0)
         return 1;

         return x * power(x,n-1);
   }

    double myPow(double x, int n) {

        int nn = n ;
        if(nn<0) nn = -nn;
             double ans = power(x,nn);

             if(n<0){
               ans = (double)(1.0) / (double)(ans);
               return ans;
             }else{
               return ans;
             }
    }

int main(){
    cout << myPow(0.00001, 2147483647)<<endl;
}