//Write a program which accept array of numbers and print count of digit.
//input:11 22 3223 232 43 8
//output: 2 2 4 3 2 1

#include<stdio.h>
#include<malloc.h>
void count_digit(int arr[],int isize){
	int i=0,temp=0,count=0;
	for(i=0;i<isize;i++){
		count=0;
		temp=arr[i];
		while(temp!=0){
			count++;
			temp/=10;
		}
	printf("%d:%d	",arr[i],count);
	}
}
int main(){
	int *arr=NULL;
	int i=0,size=0;
	printf("how many numbers;");
	scanf("%d",&size);
	arr=(int *)malloc(sizeof(int)*size);
	printf("enter the elements");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	count_digit(arr,size);
	return 0;
}
