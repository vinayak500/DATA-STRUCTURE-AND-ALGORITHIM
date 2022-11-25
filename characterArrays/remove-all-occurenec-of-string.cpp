#include<iostream>
using namespace std;

//s.find() argument is the string which you need to find
// return starting index of the match

//s.erase( starting index , length of characters to remove )


string removeAllOccurence(string s , string part){
    while(s.length()!=0 && s.find(part) < s.length()){
        s.erase(s.find(part) , part.length());
    }
    return s;
}




int main(){
   string s = "abcdabcd";
   string part = "abc";

   cout<<removeAllOccurence(s,part);
}