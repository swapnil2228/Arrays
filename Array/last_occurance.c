/*Accept array from user and one number and return its last occurance array.
input:7 11 5 11 2 9
      11
output:3 (3 is the index of 11 which is last occurance of 11)
int lastOccur(int arr[],int size,int no)*/

#include<stdio.h>
#include<malloc.h>
int last_occurance(int arr[],int isize,int num){
	int i=0,index=-1;
	for(i=isize;i>0;i--){
		if(arr[i]==num)
			break;
	}
	return i;
}
int main(){
	int i=0,size=0,num=0,index=-1;
	int *arr=NULL;
	printf("how many number");
	scanf("%d",&size);
	printf("enter the number");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("enter the number to find the last occurance");
	scanf("%d",&num);
	index=last_occurance(arr,size,num);
	if(index!=0)
		printf("%d",index);
	else
		printf("number not found ");
	return 0;

}
