#include<stdio.h>
int main(){
    int n,i,j,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j=j*2){
            x=x+1;
        }
    }
    printf("%d",x);
}