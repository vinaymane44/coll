#include<stdio.h>
#include<string.h>

int lis[200];
int i=0;

void push(int a){
	if(i<200){
		lis[i++]=a;
	}
}

void pop(){
	if(i>0){
		printf("%d\n",lis[--i]);	
	}
}

int main(){
	char j[10];
	while (1)
	{
		//scanf("%s",j);
		*j="break";
		printf("%d",j=="break");
	}
	return 0;
};
