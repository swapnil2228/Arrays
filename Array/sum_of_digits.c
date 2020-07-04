//Write a program which accept array of numbers and print sum of digits og number .
//input:11 22 3223 232 43 8
//output: 2(1+1) 4(2+2) 10(3+2+2+3) 7(2+3+2) 7(4+3) 8(8)


#include<stdio.h>
#include<malloc.h>
void sum_Digits(int arr[],int isize){
	int i=0,temp=0,sum=0,ari=0;
	for(i=0;i<isize;i++){
		ari=arr[i];
		sum=0;
		while(ari!=0){
			temp=ari%10;
			sum=sum+temp;
			ari/=10;
		}
		printf("%d::%d	",arr[i],sum);
	}
}
int main(){
	int *arr=NULL;
	int i=0,size=0;
	printf("how many numbers you want");
	scanf("%d",&size);
	printf("enter the number");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	sum_Digits(arr,size);
	return 0;
}
