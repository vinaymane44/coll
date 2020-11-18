#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int number=2545;
    int count=12;

    while (count--)
    {
        int ch=pow(2,count);
        if (number>=ch)
        {
            cout<<1;
            //cout<<ch<<endl;
            number=number-ch;
        }
        else
        {
            cout<<0;
        }
        
    }
    cout<<endl<<number;
    
    
       


    return 0;
}