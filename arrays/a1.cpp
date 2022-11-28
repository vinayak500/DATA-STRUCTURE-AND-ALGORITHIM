#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int key;
	cin>>key;
         int flag = 0;
	for(int i=0;i<n;i++){
		if(a[i]==key){
			cout<<"key found";
			flag = 1;
		}
	}

	if(flag!=1)
	cout<<"key not found";
}
