#include<iostream>
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
        return;
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


using namespace std;

float add(float a,float b){
    return (a+b);
}

float ml(float a,float b){
    return(a*b);
}

float div(float a,float b){
    return(a/b);
}

float sub(float a, float b){
    return(a-b);
}

string get_opp(){
    string k;
    while(true){
        cin>>k;
        if(k=="add" or k=="sub" or k=="mul" or k=="div"){
            return k;
        }
        cout<<"invalid oop , re enter- ";
    }
}

int main(){
    string opp;
	float z,x;
	float *a=&z;
	float *b=&x;

    cout<<"enter num1 - ";
    get_f(a);

    cout<<"\nenter num2 - ";
	get_f(b);
	//cout<<endl<<opp<<" "<<z<<"  "<<x<<endl<<endl;

    cout<<"\nenter opp\nadd - addition\nsub - substraction\nmul - multiplication\n";
    if (x != 0)
    {
        cout<<"div - division\n";
    }
    cout<<"-->";
    opp=get_opp();

    cout<<opp<<" of "<<z<<" and "<<x<<" is ";

    if (opp=="add")
    {
        float o=add(z,x);
        cout<<o;   
    }
    
    else if (opp=="sub")
    {
        float o=sub(z,x);
        cout<<o;
    }

    else if (opp=="mul")
    {
        float o=ml(z,x);
        cout<<o;
    }

    else if (opp=="div" and (x !=0))
    {
        float o=div(z,x);
        cout<<o;   
    }

    else
    {
    cout<<"error";   
    }
    
}

