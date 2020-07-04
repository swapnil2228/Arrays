//Accept array from user and display all the numbers which are divisible by 5 & 3.
//void divisible5and3(int arr[],int size);

#include<stdio.h>
#include<malloc.h>
void chk_divisible(int arr[],int isize){
	int i=0;
	for(i=0;i<isize;i++){
		if(arr[i]%5==0 && arr[i]%3==0)
			printf("%d",arr[i]);
	}
}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many numbers you want");
	scanf("%d",&size);
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("output:");
	printf("\n---------------------\n");
	chk_divisible(arr,size);
	return 0;
}
