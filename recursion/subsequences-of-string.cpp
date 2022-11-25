#include<iostream>
#include<vector>
using namespace std;

void solve(string str , string output , int index , vector<string>& ans ){
    if(index >= str.length() ){
        if(output.length() > 0){
                 ans.push_back(output);   
        }
        return;
    }
    //exclude
    solve(str , output , index+1 ,ans);
    //include
    char ch = str[index];
    output.push_back(ch);
    solve(str , output , index+1 , ans);
}


vector<string> subsequences(string str){
      vector<string> ans;
     string output;
    int index = 0;
    solve(str , output , index , ans);
    return ans;
}


int main(){

    
    string s = "abc";
     vector<string> ans = subsequences(s);
  for(int i=0;i<ans.size(); i++){
           cout<<ans[i]<<endl;
     }


}