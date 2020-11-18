#include <iostream>
using namespace std;
class Number{
private:
	int num1,num2;
public:
	void set(int a, int b){
		num1=a;
		num2=b;
	}
	
	friend int add(Number &n);
};

int add(Number &n){
	return(n.num1+n.num2);
}

int main()
{
	Number n1;
	n1.set(1,2);
	cout<<"addition is "<<add(n1)<<endl;
	return 0;
}