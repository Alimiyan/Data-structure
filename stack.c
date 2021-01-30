#include<stdio.h>
int a[20],top=-1;
void push(int item){
    if(top==19){
        printf("stack is full\n");
    }
    else{
        top++;
        a[top]=item;
    }
}
int pop(){
    int e;
    if(top==-1){
        printf("no item to pop\n");
    }
    else{
        e=a[top];
        top--;
        return e;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("stack empty\n");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}
void main(){
    int n, ret,item;
    while(1){
        printf("1- push\n2- pop\n3- display\n4- exit\n enter the operation\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            scanf("%d",&item);
            push(item);
            break;
        case 2:ret=pop();
            printf("popped %d\n",ret);
            break;
        case 3:display();
            break;
        case 4:
            return;
            break;
        default:printf("invalid input\n");
            break;
        }
    }
}