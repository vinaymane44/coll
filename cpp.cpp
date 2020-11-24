#include<iostream>
using namespace std;

int linear(int arr[] , int n , int find){
    for (int i = 0; i < n; i++)
    {
        if (find==arr[i])
        {
            return i;
        }
    }
    return -1;
}

int binary(int arr[] , int n , int find){
    int s=0,e=n;
    while (s<=e)
    {   
        int mid=(s+e)/2;
        if (arr[mid]==find)
        {
            return mid;
        }

        else if (arr[mid]>find)
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }
    }
    
}

int* input_arr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return arr;
}

void print_arr(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    int att[10];
    input_arr(att,10);
    //print_arr(att,10);
    cout<<binary(att,10,3);
    return 0;
}
