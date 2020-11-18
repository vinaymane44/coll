#include <iostream>
using namespace std;

float add(float a, float b){return a+b;}

float sub(float a, float b){return a-b;}

float mu(float a,float b){return a*b;}

float div(float a,float b){return a/b;}

int choose(){
	int opp;
	cout<<"choose a opp"<<endl<<"1 - add"<<endl<<"2 - subtract"<<endl<<"3 - multiply"<<endl<<"4 - divide"<<endl<<"enter opp - ";
	cin>>opp;
	return opp;
}

float calc(float n1 ,float n2 , int opp){
	
	if(opp==1){
		cout<<"addition";
		return(add(n1,n2));
	}

	else if(opp==2){
		cout<<"substraction";
		return(sub(n1,n2));
	}

	else if(opp==3){
		cout<<"multiplication";
		return(mu(n1,n2));
	}

	else if(opp==4){
		cout<<"division";
		return(div(n1,n2));
	}
	
}

int main(){

	bool t=1;
	
	while(t){
	
	float n1,n2;
	int opp=100;

	cout<<"enter two number"<<endl;
	cout<<"enter n1- ";
	cin>>n1;
	cout<<"enter n2- ";
	cin>>n2;

	while(!(opp<5 && opp>0)){
		opp=choose();
	}
	cout<<" of "<<n1<<" and "<<n2<<" is "<<calc(n1,n2,opp);
	
	cout<<endl<<" "<<endl<<"want to re enter program (1-yes , 0-no)";
	cin>>t;
	cout<<endl<<" "<<endl;
	}
	return 0;
}