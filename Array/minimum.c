//Write a program which accept array of numbers and return minimum of it.
//condition: array elements are distinct. no duplicate numbers.
//input:11 22 33 23 43 8
//output: 8


#include<stdio.h>
#include<malloc.h>
void chk_min(int arr[],int size){
	int i=0,min=arr[i];
	for(i=0;i<size;i++){
		if(arr[i]<min)
			min=arr[i];
	}
	printf("Minimum is:%d",min);
}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many numbers you want");
	scanf("%d",&size);
	printf("enter the numbers");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("output:\n");
	chk_min(arr,size);
	return 0;

}
