//write a program to accept an array of integers and print it in reverse order.
//input: 5 22 31 55 43 59 
//output: 59 43 55 31 22
//complexity: N

#include<stdio.h>
#include<malloc.h>
void revArr(int arr[],int size){
	int i=0;
	for(i=size-1;i>=0;i--)
		printf("%d	",arr[i]);
}
int main(){
	int *arr=NULL;
	int isize=0,i=0;
	printf("how many numbers");
	scanf("%d",&isize);
	printf("enter the elements");
	arr=(int *)malloc(sizeof(int)*isize);
	for(i=0;i<isize;i++){
		scanf("%d",&arr[i]);
	}
	revArr(arr,isize);
	return 0;
}
