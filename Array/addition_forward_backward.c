/*Accept N no from user and display addtion of two elements while traversing in forward as well as background direction
input:7 2 5 1 3
output: 10(7+3)
	3(2+1)

input:4 2 7 5 1 6
output:10(4+6)
	3(2+1)
	12(7+5)*/

#include<stdio.h>
#include<malloc.h>
void chk_addition(int arr[],int isize){
	int i=0,sum=0;
	for(i=0;i<isize-i-1;i++){
		sum=arr[i]+arr[isize-i-1];
		printf("%d (%d+%d)\n",sum,arr[i],arr[isize-i-1]);
	}
}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many numbers..");
	scanf("%d",&size);
	printf("enter the elements");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("\n------------------------\n");
	chk_addition(arr,size);
	return 0;
}
