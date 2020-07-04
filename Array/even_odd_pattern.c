/*accept integer array from user and display as follows:
Input:4,5,3,2,6
}
Output: **
              #####
              ###
              **
              **
(Note: find relation using above example)*/
#include<stdio.h>
#include<malloc.h>
void print_pattern(int arr[],int isize){
	int i=0,j=0;
	for(i=0;i<isize;i++){
		if(arr[i]%2==1){
			for(j=1;j<=arr[i];j++){
				printf("#",j);
			}
		}
		else
			printf("* *");
		printf("\n");
	}


}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many number:");
	scanf("%d",&size);
	printf("enter the element");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("--------------------------------------------\n");
	print_pattern(arr,size);
	return 0;
}
