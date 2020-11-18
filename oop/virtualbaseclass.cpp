
#include <iostream>
#include <string> 
using namespace std; 
  
class vechial { 
public: 
    string name;
    float cost;

    void set_cost(float a){
        cost=a;
    } 
    void set_name(string a){
        name=a;
    }
}; 
  
class petrol_vechial : public virtual vechial { 
public:
    float p_kmpl;
    

    void info(){
        cout<<"name -"<<name<<endl;
        cout<<"cost -"<<cost<<endl;
        cout<<p_kmpl<<" on pet"<<endl;
    }
    void set_pkmpl(float z){
        p_kmpl=z;
    }
    

}; 
  
class cng_vechial : public virtual vechial {
public: 
    float c_kmpl;

    void info(){
        cout<<"name -"<<name<<endl;
        cout<<"cost -"<<cost<<endl;
        cout<<c_kmpl<<" on cng"<<endl;
    }
    void set_ckmpl(float z){
        c_kmpl=z;
    }
    
}; 
  
class multifuel_vechial : public petrol_vechial, public cng_vechial { 
public:

    multifuel_vechial(string v,float c ,float p , float g){
        name=v;
        cost=c;
        p_kmpl=p;
        c_kmpl=g;
    }
     
    void info(){
        cout<<"Name- "<<name<<endl;
        cout<<"Cost- "<<cost<<"L"<<endl;
        cout<<p_kmpl<<" on pet"<<endl;
        cout<<c_kmpl<<" on cng"<<endl;
    }
}; 
  
int main() 
{ 
    multifuel_vechial v1("fdf",3,4,5);
    v1.info(); 
  
    return 0; 
} 
