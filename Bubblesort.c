#include<stdio.h>
void main(){
    int n,a[100],temp;
    printf("enter the limit\n");
    scanf("%d",&n);
    printf("enter the elements\n"); 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("sorted elements are: \n");
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}