//Accept array from user and display all such numbers which are even and greater than 30.
//void evenGt30(int arr[],int size)

#include<stdio.h>
#include<malloc.h>
void evenGt30(int arr[], int isize){
	int i=0;
	for(i=0;i<isize;i++){
		if((arr[i]%2==0) && (arr[i]>30))
			printf("%d	",arr[i]);
	}
}
int main(){
	int *arr=NULL;
	int i=0,size=0;
	printf("how many numbers  you want");
	scanf("%d",&size);
	printf("enter element\n");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("output:");
	printf("\n-------------------------\n");
	evenGt30(arr,size);
	return 0;
}
