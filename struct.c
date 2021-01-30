#include<stdio.h>
void main(){
    struct student{
        int id;
        int name[50];
        int mark[50];
    };

    struct student s[3];
    for(int j=0;j<3;j++){
        printf("enter the student id \n");
        scanf("%d",&s[j].id);
        printf("enter the student name \n");
        scanf("%s",s[j].name);
        printf("enter the marks \n");
        for(int i=0;i<3;i++){
            scanf("%d",&s[j].mark[i]);
    }
    }
    for(int j=0;j<3;j++){
        printf("\nstudent %d id= %d",j+1,s[j].id);
        printf("\nstudent name= %s",s[j].name);
        for(int i=0;i<3;i++){
            printf("\nstudent %d mark %d= %d",j+1,i+1,s[j].mark[i]);
    }
    
    }
    
    
}