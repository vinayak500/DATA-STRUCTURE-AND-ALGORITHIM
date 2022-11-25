#include<iostream>
using namespace std;

string replaceSpaces(string s){
    string str = "";
      for(int i=0;i<s.length();i++){
        if(s[i]==' '){
              str.push_back('@');
              str.push_back('4');
              str.push_back('0');
        }else{
               str.push_back(s[i]);
        }
      }
      return str;
}


int main(){
   char a[100];
   cin.getline(a,100);

   cout<<replaceSpaces(a)<<endl;
}