#include<stdio.h>
#define max 100
typedef struct{
    int key;
}element;
element stack[max],el;
int top=-1;
int push(element el){
    if(top>=max-1){
        printf("stack is full\n");
    }
    else{
        stack[++top]=el;
    } 
}
int pop(){
    element e;
    if(top<0){
        printf("stack is empty\n");
    }
    else{
        e=stack[top];
        top--;
        printf("popped %d",e);
    }
}
int display(){
    if(top<0){
        printf("stack is empty\n");
    }
    else{
        printf("stack is:");
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    }
}
int checkempty(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("stack is not empty\n");
    }
}
int checkfull(){
    if(top>=max-1){
        printf("stack is full\n");
    }
    else{
        printf("stack is not full\n");;
    }
    
}
void main(){
   int op,po;
   element el;
   while(1){
    printf("\n1- push\n2- pop\n3- display\n4- checkempty\n5- checkfull \n6- exit\n enter the op\n");
    scanf("%d",&op);
    switch (op){
            case 1:
                printf("enter the element\n");
                scanf("%d",&el);
                push(el);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                checkempty();
                break;

            case 5:
                checkfull();
                break;
            case 6:
                return;
                break;
            default:
                printf("invalid input\n");
                break;
    }
   }
}