#include<iostream>
using namespace std;

char maxOccurChracter(string s){
    char freq[26]={0};

// get occurence of each character
    for(int i=0;i<s.length(); i++){
        int num = s[i]-'a';
        freq[num]++;
    }

    //get max occurence charcater
    int max = 0;
    int ans = -1;
    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max=freq[i];
            ans = i;
        }
    }

    return 'a'+ans;
}




int main(){

string s;
cin>>s;

cout<< maxOccurChracter(s);





}