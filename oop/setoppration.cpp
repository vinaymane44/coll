#include <iostream>
using namespace std;

void unionn(int arr1[],int arr2[],int end1,int end2){
	int i=0,j=0;

	while (i<=end1 and j<=end2)
	{

		//cout<<arr1[i]<<" "<<arr2[j]<<endl;
		if(arr1[i]==arr2[j]){
			cout<<arr1[i]<<" ";
			++j;
			++i;
		}
		else if (arr1[i]>arr2[j])
		{
			++j;
		}
		else if (arr1[i]<arr2[j])
		{
			++i;
		}
	}
}

void intersection(int arr1[],int arr2[],int end1,int end2){
	int i=0,j=0;

	while (i<=7 and j<=4)
	{

		//cout<<arr1[i]<<" "<<arr2[j]<<endl;
		if(arr1[i]==arr2[j]){
			cout<<arr1[i]<<" ";
			++j;
			++i;
		}
		else if (arr1[i]>arr2[j])
		{
			cout<<arr2[j]<<" ";
			++j;
		}
		else if (arr1[i]<arr2[j])
		{
			cout<<arr1[i]<<" ";
			++i;
		}
	}

}

int main(){

	int arr1[]={1,2,3,4,6,12,14,15};
	int arr2[]={1,2,5,7,12};
	cout<<"intersection of arr: ";
	unionn(arr1,arr2,7,4);
	cout<<endl<<"union of arr: ";
	intersection(arr1,arr2,7,4);
	cout<<endl;
	return 0;
}
