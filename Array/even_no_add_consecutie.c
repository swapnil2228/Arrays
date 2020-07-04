/*Accept N no from user and display all consecutie pairs whose addition is even
input:3 7 2 5 9 3 6 1
output: 3 7
	5 9 
	9 3*/
#include<stdio.h>
#include<malloc.h>
void evenpair(int arr[],int isize){
	int i=0;
	for(i=0;i<isize-1;i++){
		if((arr[i]+arr[i+1])%2==0){

			printf("%d+%d=%d\n",arr[i],arr[i+1],arr[i]+arr[i+1]);
		}
	}
}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many numbers:");
	scanf("%d",&size);
	printf("enter the elements:");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	evenpair(arr,size);
	return 0;
}
