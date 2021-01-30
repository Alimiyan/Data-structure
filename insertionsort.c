#include<stdio.h>
void main(){
    int limit,a[100],i,j,cur;
    printf("enter the limilt\n");
    scanf("%d",&limit);
    printf("enter the elements\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
  
    for(i=1;i<limit;i++){
        cur=a[i];
        j=i-1;
        while(j>=0 && cur<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
    printf("the sorted array is\n");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
}