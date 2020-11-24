#include<iostream>
using namespace std;

void inter(int *c,int q,int *b,int s){      // intersection
    for (int i = 0; i < 10; i++)
    {
        for (int a = 0; a < 10; a++)
        {
            if(c[a]==b[i]){
                cout<< c[a]<<" ";
            }   

        }
    }

}

void unio(int *a,int q,int *b,int s){      // union
    int l1=0,l2=0;
    q=q-1;
    s=s-1;


    while(l1  < q or l2 < s)
    {
        if (a[l1]==b[l2])
        {
            cout<<a[l1]<<" ";
            if(l1<q){l1++;}
           
            if(l2<s){l2++;}
            
        }

        if (a[l1]<b[l2])
        {
            cout<<a[l1]<<" ";
            if(l1<q){l1++;}
        }

        if (a[l1]>b[l2])
        {
            cout<<b[l2]<<" ";
            if(l2<s){l2++;}
        }

        if(l1==q){
            for (int i = l2; i <=s; i++)
            {
                cout<<b[i]<<" ";
            }
            break;
        }

        if(l2==s){
            for (int i = l1; i <=q; i++)
            {
                cout<<b[i]<<" ";
            }
            break;
        }   
    }
}


int main(){
    int n1,n2;
    
    cout<<"Enter no of elements in list 1"<<endl;
    cin>>n1;
    int a[n1];
    cout<<"Enter elements of list 1"<<endl; 
    for (int i = 0; i < n1; i++)
    {
        cin>>a[i];
    }
    cout<<endl;

    cout<<"Enter no of elements in list 2"<<endl;
    cin>>n2;
    int b[n2];
    cout<<"Enter elements of list 2"<<endl; 
    for (int i = 0; i < n2; i++)
    {
        cin>>b[i];
    }
    cout<<endl;
    
    unio(a,n1,b,n2);
    

    return 0;
}