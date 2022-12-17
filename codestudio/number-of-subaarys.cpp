#include <iostream> 
#include<vector>
using namespace std;
int numberofSubarrays(vector<int> & arr, int n){
    // Write your code here.
    int count = 0;
    for(int i=0;i<n;i++){
        //1
        if(arr[i]==1){
           
           for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }else{
                break;
            }

           }



        }else{ //0

         for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }else{
                break;
            }

           }


        }
    }
    return count;
}


// int numberofSubarrays(vector<int> & arr, int n){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1 || arr[i]==0){
//              for(int j=i;j<n;j++){
//                  if(arr[i]==arr[j]){
//                      count++;
//                  }else{
//                      break;
//                  }
//              }
//         } 
//     }
//     return count;
// }

int main(){
    vector<int> arr = {1,0,0,0,1,1,0,1};
    cout<<numberofSubarrays(arr,8);
}