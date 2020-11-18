#include <iostream>
using namespace std;

class cyl
{
public:
	static float rad;
	static float are;
	static float hi;

	static void get(){
		cout<<rad<<endl;
	}

	static void area(){
		are=rad*3.14;
		cout<<are<<endl;
	}

	static void vol(){
		cout<<are*hi<<endl;
	}
	
};

float cyl::rad = 12;
float cyl::hi =2;
float cyl::are;

int main(){
	cout<<"radius "; cyl::get();
	cout<<"area "; cyl::area();
	cout<<"volume "; cyl::vol();
	return 0;
}