//write a program that accepts an array of numbers and returns the difference between the sum of even numbers and the sum of odd numbers.
//input:4 11 22 33 44
//output: 44 (44+22)-(33+11)

#include<stdio.h>
#include<malloc.h>
void sum_Even_odd(int arr[],int size){
	int i=0,even=0,odd=0,ans=0;
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			even+=arr[i];
		}

		if(arr[i]%2!=0){
			odd+=arr[i];
		}
	}
	ans=even-odd;
	printf("output is:%d\n",ans);
	printf("sum of even no:%d\n",even);
	printf("sum of odd no:%d\n",odd);
}
int main(){
	int *arr=NULL;
	int i=0,size=0;
	printf("how many numbers you want: ");
	scanf("%d",&size);
	arr=(int *)malloc(sizeof(int)*size);
	printf("enter the elments");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("output:\n");
	sum_Even_odd(arr,size);
	return 0;
}
