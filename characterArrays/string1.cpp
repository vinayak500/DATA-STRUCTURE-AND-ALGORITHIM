#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    cout<<s<<endl;

//dynamically allocated string
    string* sp = new string;
    *sp = "apple";
    cout<< *sp <<endl;

    string s2 = "hello";
    cout<<s2[2]<<endl;
    s[2] = 'f';

    string s3;
    s3 = "def";

    //string concatenation
    s3 = s3 + s2;
    cout<<s3 <<endl;

    string s6 = "hello";
    cout<< s6.size() <<endl;
    cout<< s6.substr(2)<<endl;
    cout<< s6.substr(2,2)<<endl;

}