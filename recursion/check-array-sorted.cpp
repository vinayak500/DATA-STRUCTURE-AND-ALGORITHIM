#include<iostream>
using namespace std;

bool is_sorted(int a[] , int size){

    // if there is no elements or only one element
        if(size==0 || size==1){
                return true;
        }

   if(a[0] > a[1]){
    return false;
   }

   bool isSmallerOutput = is_sorted(a+1,size-1);
   if(isSmallerOutput){
    return true;
   }else{
    return false;
   }

}





bool is_sorted(int a[] , int size){

    // if there is no elements or only one element
        if(size==0 || size==1){
                return true;
        }


 bool isSmallerOutput = is_sorted(a+1,size-1);
   if(!isSmallerOutput){
    return false;
   }

   if(a[0] > a[1]){
    return false;
   }

}




int main(){
    int a[] = {10,20,30,40,50};
    cout<<is_sorted(a,5);
}