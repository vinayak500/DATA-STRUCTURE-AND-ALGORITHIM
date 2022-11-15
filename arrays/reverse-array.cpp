#include<iostream>
#include<vector> 
using namespace std;

vector<int> reverse(vector<int> v , int m){
  
  int s = m+1;
  int e = v.size()-1;

  while(s<e){
    int temp = v[s];
    v[s] = v[e];
    v[e] = temp;
    s++;
    e--;
  }
     
    return v;
}


void printVector(vector<int> v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}



int main(){
    vector<int> v;


    v.push_back(10);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.push_back(13);
   

      int m;
      cin>>m;


    vector<int> ans = reverse(v , m);

   printVector(ans);
}