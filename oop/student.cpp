#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	int prn;
	string name;
	int sub1;
	int sub2;
	int sub3;


//	Student(int _prn, string _name, int _sub1, int _sub2, int _sub3){
//		setPrn(_prn);
//		setName(_name);
//		setsub1(_sub1);
//		setsub2(_sub2);
//		setsub3(_sub3);
//	}
	
	void setPrn(int a){
		prn=a;
	}

	void setName(string a){
		name=a;
	}

	void setsub1(int a){
		sub1=a;
	}

	void setsub2(int a){
		sub2=a;
	}

	void setsub3(int a){
		sub3=a;
	}

	int getprn(){
		return prn;
	}

	string getname(){
		return name;
	}

	float avarage(){
		return (sub1+sub2+sub3)/3;
	}

	float avarage2max(){
		int smallest=10000;
		if (sub1<smallest){
			smallest=sub1;
		}
		if (sub2<smallest){
			smallest=sub2;
		}
		if (sub3<smallest){
			smallest=sub3;
		}
		//cout<<smallest<<endl;
		return(sub1+sub2+sub3-smallest)/2;
	}

	void printall(){
		cout<<prn<<name<<sub1<<sub2<<sub3<<endl;
	}
	
};

int main(){
	
	int p,s1,s2,s3;
	string n;

	Student s[3];

	for (int i=0 ; i<3 ; i++){
		
		int a=i+1;

		cout<<"enter prn of student "<<a<<" : ";
		cin>>p;
		cout<<"enter name of student "<<a<<" : ";
		cin>>n;
		cout<<"enter marks of s1 of student "<<a<<" : ";
		cin>>s1;
		cout<<"enter marks of s2 of student "<<a<<" : ";
		cin>>s2;
		cout<<"enter marks of s3 of student "<<a<<" : ";
		cin>>s3;
		cout<<" "<<endl;

		s[i].setPrn(p);
		s[i].setName(n);
		s[i].setsub1(s1);
		s[i].setsub2(s2);
		s[i].setsub3(s3);

	}

	cout<<" "<<endl;
	
	for(int i=0 ; i<3 ; i++){
		int a =i+1;
		cout<<"name-"<<s[i].getname()<<"     prn-"<<s[i].getprn()<<endl;
		cout<<"average- "<<s[i].avarage()<<endl;
		cout<<"average of max 2- "<<s[i].avarage2max()<<endl<<endl;
		cout<<" "<<endl;
	}
	
	return 0;
}