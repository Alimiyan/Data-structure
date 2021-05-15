#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    
    struct node* next;
};
struct node *newnode,*head=NULL,*temp,*prev;
void insbeg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%s",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void inssp(){
    int n;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the position\n");
    scanf("%d",&n); 
    printf("enter the data\n");
    scanf("%s",&newnode->data);
        temp=head;
        for(int i=1;i<n;i++){
            prev=temp;
            temp=temp->next;
        }newnode->next=temp;
        prev->next=newnode;
}
void insend(){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter the data\n");
    scanf("%s",&newnode->data); 
    if(head==NULL){
        newnode->next=head;
        head=newnode;
    }else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }temp->next=newnode;
    }
}
void delbeg(){
    temp=head->next;
    head=temp;
}
void delsp(){
    int n;
    printf("enter the location\n");
    scanf("%d",&n);
    temp=head;
    for(int i=1;i<n;i++){
        prev=temp;
        temp=temp->next;
    }prev->next=temp->next;
    free(temp);
}
void delend(){
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }prev->next=NULL;
    free(temp);
}
void dis(){
    newnode=head;
    printf("linked list\n");
    while(newnode!=NULL){
        printf("%c->",newnode->data);
        newnode=newnode->next;
    }
}
void main(){
    int ch;
      while(1){
        printf("\n1- insert beg\n2- insert sp \n3- insert end \n4- del beg \n5- del spe \n6- del end \n7- display \n8-exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:insbeg();
            break;
            case 2:inssp();
            break;
            case 3:insend();
            break;
            case 4:delbeg();
            break;
            case 5:delsp();
            break;
            case 6:delend();
            break;
            case 7:dis();
            break;
            case 8:return;
        }
      }
}


