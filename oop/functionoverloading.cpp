#include <iostream>
#include<cmath>
using namespace std;

class Area{
public:
	float circle(float a){
		return(2.14*a*a);  
	}

	float circle(char a, float b){
		float r=2.14;
		if(a=='d')
			return(r*(b/2)*(b/2));
		
		if(a=='r')
			return circle(b);
		
		if(a=='c')
			return circle(b/(2*r));
		
		else
			return circle(b);
	}

	float rec(float a){
		return(a*a);
	}

	float rec(float a, float b){
		return(a*b);
	}

	float triangle(float a , float b){
		return((a*b)/2);
	}

	float triangle(float a , float b ,float c){
		float s=(a+b+c/2);
		return( sqrt(s*(s-a)*(s-b)*(s-c)) );
	}

	float triangle(float a){
		return(triangle(a,a,a));
	}
};

int main(){
	Area a;
	cout<<a.circle('c',4.28)<<" units"<<endl; // r radius , d diameter , c circumference
	cout<<a.rec(2,5)<<" units"<<endl;
	cout<<a.triangle(1,2,3)<<" units"<<endl;
	cout<<a.triangle(1)<<" units"<<endl;
	return 0;
}