#include<stdio.h>
#define max 100
typedef struct{
    int data;
}queue;
queue a[max];
int front=-1;
int rear=-1;
void insert(){
    queue item;
    if(rear==max-1){
        printf("queue is full\n");
    }else if(rear==-1){
        printf("enter the element\n");
        scanf("%d",&item);
        rear++;
        front++;
        a[rear]=item;
    }
    else{
        printf("enter the element\n");
        scanf("%d",&item);
        rear++;
        a[rear]=item;
    }
}
void delete(){
    if(rear==-1){
        printf("queue is empty\n");
    }else{
        front++;
    }
}
void display(){
    printf("queue is : \n");
        for(int i=front;i<=rear;i++){
            printf("%d ",a[i]);
        }
}
void main(){
    int ch;
    while(1){
        printf("\n1- insert\n2- delete\n3-display\n4- exit\nenter your choice\n");
        scanf("%d",&ch);
        switch (ch){
        case 1:insert();
            break;
        case 2:delete();
            break;
        case 3:display();
            break;
        case 4:return;
            break;
        }
    }
}