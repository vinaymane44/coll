#include<stdio.h>

int arr[7];
int front=9,rear=9;

void enque(int a){
    rear=(rear+1)%9;
    arr[rear]=a;
}

void dequeue(){
    front=(front+1)%9;
}

void print(){
    for (int i = front; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int main(){
    enque(12);
    print();
    enque(56);
    print();
    enque(4);
    print();
    dequeue();
    print();
    dequeue();
    print();
    return 0;
}