#include <iostream>
using namespace std;

class Vechial{
public:
	Vechial(){
		cout<<"This is vechial"<<endl;
	}
};

class Fourwheeler{
public:	
	Fourwheeler(){
		cout<<"have 4 wheels"<<endl;
	}
};

class Car : public Vechial , public Fourwheeler{
public:
	Car(){
		cout<<"it is a car"<<endl;
	}
};

class Bike : public Vechial{
public:
	Bike(){
		cout<<"it is a bike"<<endl;
	}
};

class Public_transport : public Car{
public:
	Public_transport(){
		cout<<"it is a public transport"<<endl;
	}
};

int main(){

	Car c1;
	cout<<endl;
	Bike b1;
	cout<<endl;
	Public_transport p1;
	cout<<endl;
	return 0;
}