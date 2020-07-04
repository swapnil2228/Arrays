//Write a program which accept array of numbers and return maximum of it.
//condition: array elements are distinct. no duplicate numbers.
//input:11 22 33 23 43 8
//output: 43

#include<stdio.h>
#include<malloc.h>
void chk_max(int arr[],int size){
	int i=0,max=arr[i];
	for(i=0;i<size;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	printf("%d",max);
}
int main(){
	int *arr=NULL;
	int size=0,i=0;
	printf("how many numbers you want");
	scanf("%d",&size);
	arr=(int *)malloc(sizeof(int)*size);
	printf("enter the elemets");
	for(i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	printf("output:\n");
	chk_max(arr,size);
	return 0;
}
