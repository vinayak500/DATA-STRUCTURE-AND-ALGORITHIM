#include<iostream>
using namespace std;

int getlength(string s){
    int count = 0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}


string isvvalid(string a){
    string str = "";
    int len = getlength(a);
    for(int i=0;i<len;i++){
         if( ( 'a'<a[i]<'z') || ( 'A'<a[i]<'Z') ||  ( '0'<a[i]<'9') ){
             str.push_back(a[i]);
         }
    }
   return str;
}





// bool checkpalindromeAdvanced(string a){
//       int s = 0;
//       int e = getlength(a)-1;


//       while(s<e){


//           while(! (  'a'< a[s] < 'z'  || 'A'< a[s] < 'Z' ||  0< a[s] < 9) ){
//             s++;
//           }


//           while(! (  'a'< a[e] < 'z'  || 'A'< a[e] < 'Z' ||  0< a[e] < 9) ){
//            e--;
//           }

//           if(a[s]!=a[e]){
//                return false;
//           }

//             s++;
//             e--;
//       }

//       return true;
// }

char tolower(char ch){
    if ( 'a'<ch<'z' || 'A'<ch<'Z'){
        return ch;
    }else{
        return ch-'A'+'a';
    }
}

bool checkPalindrome(string str){

    string a = isvvalid(str);
    cout<<a;
    int s  = 0;
    int e = getlength(a) - 1;

    while(s<e){
        if( tolower(a[s])  !=   tolower(a[e])){
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;
}


int main(){


   string s;
  cin>>s;

   cout<<checkPalindrome(s);



}