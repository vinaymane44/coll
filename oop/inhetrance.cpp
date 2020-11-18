#include <iostream>
using namespace std;

class Organisms{
public:
	Organisms(){
		cout<<"This is a Organism"<<endl;
	}
};

class Animal : public Organisms{
public:
	Animal(){
		cout<<"it is a animal"<<endl;
	}
};

class Microbes : public Organisms{
public:
	Microbes(){
		cout<<"it ia a Microbe"<<endl;
	}	
};

class Dog : public Animal{
public:
	Dog(){
		cout<<"it is a dog"<<endl;
	}
};

int main(){
	Microbes m1;
	cout<<endl;
	Dog d1;
	return 0;
}
