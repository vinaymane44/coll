#include<stdio.h>

int arr[20];
int front=-1,rear=-1;

void enque(int q){
    if (rear>=19)
    {
        printf("error que is full\n");
        return;
    }
    
    rear++;
    arr[rear]=q;
}

void deque(){
    if (rear<=front)
    {
        printf("error que is empty\n");
        return;
    }
    
    front++;
}

void is_emt(){
    if(front==rear){
        printf("it is empty\n");
    }
    else
    {
        printf("it is not empty\n");
    }
    
}

void is_full(){
    if(rear==19){
        printf("it is full\n");
    }
    else
    {
        printf("it is not full\n");
    }
    
}

int main(){
    enque(12);
    enque(3);
    enque(45);
    deque();
    is_emt();
    is_full();

    return 0;
}


