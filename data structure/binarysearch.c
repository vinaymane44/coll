#include <stdio.h>

int midd(int a,int b){
	return(a+b)/2;
}

int main(){
	int lis[20]={1,2,3,4,5,6,7,8,9,10,11,14,16,18};

	int low=0;
	int hig=13;
	int mid;
	int find=9;

	while(low<hig){
		mid=midd(low,hig);

		if (find==lis[mid]){
			printf("%d\n",mid);
			break;
		}
		else if (find<lis[mid]){
			hig=mid+1;
		}
		else if (find>lis[mid]){
			low=mid-1;
		}
	}

}