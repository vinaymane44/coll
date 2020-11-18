#include <iostream>
using namespace std;

class Data{

public:
    int data;

    Data(){}

    Data(int a){
        getdata(a);
    }

    ~Data(){}

    void getdata(int b){
        data=b;
    }

    void printdata(){
        cout<<data<<endl;
    }
};

int main(){
    Data d1(6);
    Data d2=d1;
    d2.printdata();
    return 0;
}