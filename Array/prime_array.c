//write a program to accept an array of numbers and print prime numbers from that array.
#include<stdio.h>
#include<malloc.h>
void prime(int arr[],int size){
	int i=0,flag=0,j=0;
	for(i=0;i<size;i++){
		flag=1;
		for(j=arr[i]/2;j>1;j--){
		if(arr[i]%j==0){
			flag=0;
		}
		}
		if(flag==1 && arr[i]!=1){
			printf("%d\t",arr[i]);
		}
		}
}

int main(){
	int *arr=NULL;
	int isize=0,i=0;
	printf("how many numbers you want...");
	scanf("%d",&isize);
	arr=(int *)malloc(sizeof(int)*isize);
	printf("enter the elements");
	for(i=0;i<isize;i++){
		scanf("%d",&arr[i]);
	}
	printf("prime numbers\n:");
	prime(arr,isize);
	return 0;
}
