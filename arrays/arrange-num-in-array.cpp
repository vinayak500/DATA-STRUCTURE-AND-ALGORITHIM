#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n; 


    int array[100];

    if(n%2==0){
        int mid = n/2;
        int odd_num = 1;
        int even_num = 2;

     for(int i=0;i<=mid-1;i++){
        array[i] = odd_num;
        odd_num = odd_num + 2;
     }

 for(int i=n-1;i>=mid;i--){
        array[i] = even_num;
        even_num = even_num + 2;
     }

    }
    else{

    int mid = n/2;
        int odd_num = 1;
        int even_num = 2;

     for(int i=0;i<=mid;i++){
        array[i] = odd_num;
        odd_num = odd_num + 2;
     }

 for(int i=n-1;i>=mid+1;i--){
        array[i] = even_num;
        even_num = even_num + 2;
     }




    }




    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

}