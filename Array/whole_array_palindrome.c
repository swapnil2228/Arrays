/*Accept array and check whether whole array is palindrome or not.
input: 1 2 3 4 3 2 1
output: true*/

#include<stdio.h>
#include<malloc.h>
void chk_palindrome(int arr[],int isize){
	int i=0,flag=0;
	for(i=0;i<isize-i-1;i++){
		flag=0;
		if(arr[i]==arr[isize-i-1])//purn array reverse check karych mhnun size-1-i;
			flag=1;
	}
	if(flag==1)
		printf("true");
	else
		printf("false");
}
int main(){
	int i=0,size=0;
	int *arr=NULL;
	printf("how many numbers..");
	scanf("%d",&size);
	printf("enter the elements");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("\n-------------------------\n");
	chk_palindrome(arr,size);
	return 0;
}
