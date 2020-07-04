//Write a program that accepts an array of integers and print only even numbers from an array.
 //input:5 22 31 55 43 59 
 //output: 22
 
#include<stdio.h>
#include<malloc.h>

void even(int arr[],int size){
	int i=0;
	for(i=0;i<size;i++){//to traverse every element in given array
		if(arr[i]%2==0){//check krty ek ek element
			printf("%d\t",arr[i]);
		}
	}
}
int main(){
	int *arr=NULL;
	int num=0,i=0;
	printf("how many numbers you want");
	scanf("%d",&num);
	arr=(int *)malloc(sizeof(int)*num);
	printf("enter the elements");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	even(arr,num);
	return 0;	
	
}
