#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *new_node,*current,*start=NULL;
    int i,n;
    printf("enter the size \n");
    scanf("%d",&n);
    printf("Enter the values\n");
    for(i=1;i<=n;i++){
        new_node=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&new_node -> data);
        new_node -> next =NULL;
        if(start==NULL){
            start=new_node;
            current=new_node;
        }
        else{
            current -> next=new_node;
            current=new_node;
        }
    }
    printf("the linked lise is\n");
    for(current=start;current!=NULL;current=current->next){
        printf("%d-> ",current->data);
    }
    printf("NULL");
}