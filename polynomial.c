#include<stdio.h>
#define max 100
typedef struct{
        float coef;
        int exp;
}polynomial;
polynomial terms[max];
int avail=0;
attatch(float coeff,int expon){
    terms[avail].coef=coeff;
    terms[avail].exp=expon;
    avail++;
}
int main(){
    int expon,starta,startb,finisha,finishb,startd,finishd,n=0;
    float coeffi;
    starta=avail;
    printf("enter the first polynomial\n");
    while(1){
        printf("enter the coefficient\n");
        scanf("%f",&coeffi);
        printf("enter the exponent\n");
        scanf("%d",&expon);
        n++;
        if(coeffi==0 && expon==0){
            break;
        }else{
            attatch(coeffi,expon);
        }
    }
    finisha=n-2;
    printf("enter the second polynomial\n");
    while(1){
        printf("enter the coefficient\n");
        scanf("%f",&coeffi);
        printf("enter the exponent");
        scanf("%d",&expon);
        n++;
        if(coeffi==0 && expon==0){
            break;
        else{
            attatch(coeffi,expon);
        }
        }
    }
    
}