//Accept array from user and accept one number from user and return frequency of that number.
/*input: 7 
	21 9 11 11 7 11 51
	11
output: 11-> 3*/

	//int frequency(int arr[],int size,int no);
#include<stdio.h>
#include<malloc.h>
int cal_freq(int arr[],int isize,int num){
	int i=0,count=0,temp=0;
	for(i=0;i<isize;i++){
		if(arr[i]==num){
			count++;
		}
	}
	return count;
}
int main(){
	int i=0,size=0,num=0,freq=0;
	int *arr=NULL;
	printf("how many numbers :");
	scanf("%d",&size);
	printf("enter the elements");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("enter number which you want to search...");
	scanf("%d",&num);
	freq=cal_freq(arr,size,num);
	if(freq!=0)	
		printf("the number %d occurs %d times",num,freq);
	else
		printf("no");
	return 0;
}
