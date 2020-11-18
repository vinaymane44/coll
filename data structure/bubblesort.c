#include <stdio.h>


int main(){

	int lis[50],count;
	printf("enter number of len of arr\n");
	scanf("%d\n",&count);
	for (int i = 0; i < count; ++i)
	{
		scanf("%d",&lis[i]);
	}



	
	for (int a = 0; a < count; ++a)
	{
		for (int i = 0; i < count-1-a; ++i)
		{
			if (lis[i]>lis[i+1])
			{
				int tmp=lis[i];
				lis[i]=lis[i+1];
				lis[i+1]=tmp;
				printf("a");
			}
			else{printf("b");}
		}
	}

	printf("\nsorted array\n");
	for (int i = 0; i < count; ++i)
		{
			printf("%d\n",lis[i]);
		}

	return 0;
}