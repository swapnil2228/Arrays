/* accept integer array from user, accept range from user and give addition of numbers between range
Input: Array:7, 9,15,37,22,29
           Range:10-25
Output:15+22=37*/


#include<stdio.h>
#include<malloc.h>
void addition_range(int arr[],int isize,int lower,int upper){
	int i=0,sum=0;
	for(i=0;i<isize;i++){
		if((arr[i]>=lower) && (arr[i]<=upper))
			sum=sum+arr[i];
	}
	printf("%d",sum);
}
int main(){
	int *arr=NULL;
	int i=0,size=0,upperlimit=0,lowerlimit=0;
	printf("how many number you want:");
	scanf("%d",&size);
	printf("enter the elemnents:\n");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("enter the lower limit:\n");
	scanf("%d",&lowerlimit);
	printf("enter upper limit:\n");
	scanf("%d",&upperlimit);
	printf("output:\n");
	addition_range(arr,size,lowerlimit,upperlimit);
	return 0;
}
