#include <iostream>
using namespace std;

class BOX{
public:
	int l,b,h;
	static int count;
	
	BOX(int a, int d, int c){
		count++;
		l=a;
		b=d;
		h=c;
	}
	
	int volume(){
		return(l*b*h);
	}

	static int counter(){
		return count;
	}
};
int BOX::count=0;

int main(){
	BOX b1(1,2,3),b2(2,3,4);
	cout<<"volume of cube is "<<b1.volume()<<endl;
	cout<<"volume of cube is "<<b2.volume()<<endl;
	cout<<"total number of boxes are "<<BOX::counter()<<endl;
	return 0;
}