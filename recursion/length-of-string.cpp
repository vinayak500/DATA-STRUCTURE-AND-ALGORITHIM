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



int main(){


  char s[100];
  cin>>s;

  cout<< getlength(s) <<endl;


}