/*accept integer array from user and display as follows:
Input: 7,2,5,3,9
Output:  1,2,3,4,5,6,7
               1,2
               1,2,3,4,5
               1,2,3
               1,2,3,4,5,6,7,8,9
(Note: find relation using above example) */
#include<stdio.h>
#include<malloc.h>
void print_number(int arr[],int isize){
	int i=0,j=0;
	for(i=0;i<isize;i++){
		for(j=1;j<=arr[i];j++){
			printf("%d\t",j);
		}
		printf("\n");
	}
}
int main(){
	int size=0,i=0;
	int *arr=NULL;
	printf("how many numbers:");
	scanf("%d",&size);
	printf("enter elements:");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("output:\n");
	print_number(arr,size);
}
