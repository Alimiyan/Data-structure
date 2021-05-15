#include<stdio.h>
void main(){
    int num=12341,rem,sum=0;
    while(num!=0){
        rem=num%10;          
        sum=sum+rem;        
        num=num/10;
    }
    printf("\n%d",sum);
}