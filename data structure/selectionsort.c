#include <stdio.h>

int main(){

	int len , arr[100];
	printf("enter number of inputs\n");
	scanf("%d",& len);
	for (int i = 0; i < len; ++i)
	{
		scanf("%d",&arr[i]);	
	}
	


	//int arr[20]={9,8,7,6,5,4,3,2,1};
	int di;

	for (int a = 0; a < 9; ++a)
	{
		int min=999;
		for (int i = a; i < 9; ++i)
		{
			if(arr[i]<min){
				min=arr[i];
				di = i;	
			}
		}
		//printf("%d %d\n",di,a );
		int tmp=arr[a];
		arr[a]=arr[di];
		arr[di]=tmp;

	}
	printf("sorted array\n");
	for (int i = 0; i < 9; ++i)
	{
		printf("%d\n",arr[i] );
	}


	return 0;
}