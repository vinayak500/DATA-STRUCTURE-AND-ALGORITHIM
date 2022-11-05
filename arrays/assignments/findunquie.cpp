#include<iostream>
using namespace std;

int findunquie(int a[] , int n){

    int ans = 0;
    for(int i=0;i<n;i++){
      ans = ans ^ a[i];
    }

    return ans;
}




int main(){

    //Brute force approach
    //  int t;
    //  cin>>t;


    //  while(t--){
    //     int n;
    //     cin>>n;

    //     int array[1000];

    //    for(int i=0;i<n;i++){
    //     cin>>array[i];
    //    }


    //    for(int i=0;i<n-1;i++){
    //     int flag = 0;
    //       for(int j=0;j<=n-1;j++){
    //             if( (i!=j)   && (array[i]==array[j]) ){
    //                 flag=1;
    //             }
    //       }

    //       if(flag==0){
    //         cout<<array[i];
    //       }
    //    }

    //  }



    int n;
    cin>>n;

    int array[1000];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<< findunquie(array , n);

    
}