#include<iostream>
#include<string.h>
using namespace std;

int lis[20];
int i=0;

void push(int a){
	if(i<20){
		lis[i++]=a;
	}
}

void pop(){
	if(i>0){
		cout<<lis[--i]<<endl;
	}
}

int main(){
	string n;
	while(1){
		cin>>n;
		if(n=="exit"){
			return 0;
		}
		
		if (n.substr(0,4)=="pop"){
			
		}
		cout<<n.substr(3);
		
		
	}

	return 0;
}