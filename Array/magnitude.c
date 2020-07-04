/*Accept N no from user and display all such no whose magnititude is same as summation of its neighbours
input:3 2 6 4 1 -3 5 8 2
output: 2+4 = 6
	4+ -3 = 1 
	-3+8 = 5*/
#include<stdio.h>
#include<malloc.h>
void summagnitude(int arr[],int isize){
	int i=0;
	for(i=1;i<isize-1;i++){
		if(arr[i-1]+arr[i+1]==arr[i])
			printf("%d+%d=%d\n",arr[i-1],arr[i+1],arr[i]);
	}
}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many number");
	scanf("%d",&size);
	printf("enter the elements");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("-----------------------\n");
	summagnitude(arr,size);
	return 0;
}
