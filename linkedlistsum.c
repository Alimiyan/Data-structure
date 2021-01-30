#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *new_node,*current,*start=NULL;
    int i,n,sum=0;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=1;i<=n;i++){
        new_node=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node ->data);
        new_node->next=NULL;
        if(start==NULL){
            start=new_node;
            current=new_node;
        }
        else{
            current->next=new_node;
            current=new_node;
        }
    }
    for(current=start;current!=NULL;current=current->next){
        sum=sum+current->data;
    }
    printf("sum = %d",sum);
}