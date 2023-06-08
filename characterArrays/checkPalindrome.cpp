#include<iostream>
using namespace std;

int getlength(char a[]){
    int count = 0;
    for(int i = 0 ; a[i]!='\0' ; i++){
        count++;
    }
    return count;
}

char tolower(char ch){

   if(ch>='a'  && ch <='z'){
    return ch;
   }else{
    return ch-'A'+'a';
   }

}


bool checkPalindrome(char a[] , int len){
      int s = 0 ;
      int e = len-1;

      while(s<e){
        if(  tolower(a[s]) !=  tolower(a[e]) ){
            return false;
        }
        s++;
        e--;
      }
      return true;
}

int main(){
    char a[100];
    cin>>a;
    

    int len = getlength(a);

    cout<< checkPalindrome(a,len)<<endl;

}