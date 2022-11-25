#include<iostream>
using namespace std;

int getlength(char s[]){
    if(s[0] == '\0'){
        return 0;
    }
    int ans = getlength(s + 1);
    return 1 + ans;
    //return 1 + getlength(s+1);
}


void removex(char s[]){

   if(s[0]=='\0'){
    return;
   }
  
   if(s[0]!='x'){
    removex(s+1);
   }else{
         for(int i=0;s[i]!='\0';i++){
            s[i] = s[i+1];
         }
         removex(s);
   }
       
}



int main(){
  
  char a[100];
  cin>>a;

  cout<<a<<endl;
  cout<<getlength(a)<<endl;

  removex(a);

  cout<<a<<endl;
  cout<<getlength(a)<<endl;


}