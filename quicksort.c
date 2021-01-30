#include<stdio.h>
void quicksort(int,int);
int partition(int,int);
int a[100],limit,i;
int main(void){
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter the elements\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    quicksort(0,limit-1);
    printf("the sorted array is\n");
    for(i=0;i<limit;i++){
		printf("%d ",a[i]);
	}
}
void quicksort(int left,int right){
	int p;
    if(left<right){
        p=partition(left,right);
        quicksort(left,p-1);
        quicksort(p+1,right);
    }
}
int partition(int left,int right){
    int pivot=a[left];
    int i=left+1;
	int j=right;
    int temp;
	do{
	    while(a[i]<=pivot && i<j){
			i++;
		}
		while (a[j]>pivot){
			j--;
		}
			if(i<j){
        	    temp=a[i];
            	a[i]=a[j];
        	   	a[j]=temp;
      	 	}
    }while(i<j);
	temp=a[left];
	a[left]=a[j];
	a[j]=temp;
	return j;
}