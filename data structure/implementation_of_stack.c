#include<stdio.h>
int arr[20];
int point=-1;

void push(int a){
    if(point>=20){
        printf("stack is full");
        return;
        }
    point++;
    arr[point]=a;
}

void pop(){
    if(point<=0){
        printf("stack is empty\n");
        return;
        }
    point--;
}

void is_emt(){
    if(point>=-1){
        printf("it is empty\n");
    }
    else{printf("it is noy empty\n");}
}

void is_full(){
    if(point>=20){
        printf("it is full\n");
    }
    else{printf("it is not full\n");}
}




int main(){

    is_emt();
    push(1);
    push(2);
    push(10);
    pop();
    is_full();
    
    return 0;
}