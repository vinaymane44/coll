#include <iostream>
#include <string>
#include <sstream>
using namespace std;
void get_f(float* f)
{
    try {
	stringstream str;
    string s;
	cin>>s;
	
	if (s=="0")
	{
		//cout<<0<<endl;
		*f=0;
	}
	 
    str << s; 
	float x; 
	str >> x;
    //cout<<"Converted value of character 5 :"<<x;

	if (x==0)
	{
		//cout<<"not number\n";
		throw(0);
	}
	*f = x;
	}

	catch(int n){
		cout<<"not a number retry - ";
		get_f(f);
	}
}

int main(){
	float z,x;
	float *a=&z;
	float *b=&x;
	get_f(a);
	get_f(b);
	cout<<z<<"  "<<x;
}