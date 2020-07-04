//Accept 6 elements from user as well as one element and return the index at which element 
//ouccurs in our array.[linear search]
//input:15 11 9 7 18 21 , 18
//output: 4 (index)
//array index start from zero so index=-1;
#include<stdio.h>
#include<malloc.h>

int linear_search(int arr[],int isize,int num){
	int i=0,index=-1;
	for(i=0;i<isize;i++){
		if(arr[i]==num)
			index=i;
	}
	return index;
}
int main(){
	int *arr=NULL;
	int i=0,size=0,num=0,index=-1;
	printf("how many number");
	scanf("%d",&size);
	printf("enter elements");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("enter number to search");
	scanf("%d",&num);
	index=linear_search(arr,size,num);
	if(index!=-1)
		printf("the number %d ocurs at %d index",num,index);
	else
		printf("false");
	return 0;
}
