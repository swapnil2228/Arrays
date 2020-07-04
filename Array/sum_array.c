//Write a program that accepts array and prints the sum of all numbers.
// input:5 22 31 55 43 59 
// output:210

#include<stdio.h>
#include<malloc.h>
int sum(int arr[],int size){
	int i=0,sum=0;
	for(i=0;i<size;i++)
		sum+=arr[i];
	return sum;
}

int main(){
	int *arr=NULL;
	int size=0,i=0;
	printf("how many elements you want");
	scanf("%d",&size);
	arr=(int *)malloc(sizeof(int)*size);
	printf("enter the element");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int ans=sum(arr,size);
	printf("%d",ans);
}
