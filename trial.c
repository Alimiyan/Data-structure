#include<stdio.h>
#define max 100
typedef struct{
    int col;
    int row;
    int value;
}term;
term a[max];
int main(){
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a[i]);
    }
    printf("array ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}