//Accept array and check whether array is sorted or not.(ascendinng)

#include<stdio.h>
#include<malloc.h>
void chk_asc(int arr[],int isize){
	int i=0,flag=0;
	for(i=0;i<isize-1;i++){
		flag=0;
		if(arr[i]>arr[i+1])
			flag=1;
	}
	if(flag==1)
		printf("not sorted");
	else
		printf("sorted");
}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many numbr");
	scanf("%d",&size);
	printf("enter the elemnents");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("\n------------------------------\n");
	chk_asc(arr,size);
	return 0;
}
