#include<stdio.h>
#include<string.h>
int mergesort(int,int);
int merge(int,int,int,int);
 int a[100];
 int i,j,limit;
int main(void){
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the elements");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    mergesort(j,limit-1);
    printf("sorted array is\n");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
}
    int mergesort(int l,int h){
        int m;
        if(l<h){
            m=(l+h)/2;
            mergesort(l,m);
            mergesort(m+1,h);
            merge(l,m,m+1,h);
        }
    }
int merge(int l1,int h1,int l2,int h2){
    int i=l1,j=l2,k=0,b[100];
    while(i<=h1 && j<=h2){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }   
    }
    while(i<=h1){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=h2){
        b[k]=a[j];
        k++;
        j++;
    }
    for(i=l1,k=0;i<=h2;i++,k++){
        a[i]=b[k];
    }
}