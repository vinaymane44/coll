#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    void bio(){
        cout<<"name of person - "<<name<<endl;
        cout<<"age of person  - "<<age<<endl;
    }
};

class Student : public virtual Person {
public:
    string study_at;
};

class Employe : public virtual Person {
public:
    string work_at;
};

class Part_time : public Student , public Employe {
public:
    void info(){
        cout<<"name of part-timer - "<<name<<endl;
        cout<<"he study at "<<study_at<<endl;
        cout<<"he work at "<<work_at<<endl<<endl;
    }
};

int main(){
    Part_time p;
    p.name="Harry";
    p.work_at="Fiverr";
    p.study_at="Hogwarts";
    p.age=23;

    p.bio();
    cout<<endl;
    p.info();

    return 0;
}