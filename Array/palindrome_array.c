// accept array from user and display palindrome numbers in it. 
//Input:11, 120,131,24
//Output:11, 131

#include<stdio.h>
#include<malloc.h>
int isPalindrome(int ino){
	int temp=0,rem=0,rev=0;
	temp=ino;
	while(temp!=0){
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(ino==rev)
		return 1;
	return 0;
}
void print_palindrome(int arr[],int isize){
	int i=0;
	for(i=0;i<isize;i++){
		if(isPalindrome(arr[i]))
			printf("%d	",arr[i]);
	}	
}
int main(){
	int *arr=NULL;
	int size=0,i=0;
	printf("how many numbers you want to check..");
	scanf("%d",&size);
	printf("enter the elements");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("output..\n");
	print_palindrome(arr,size);
	return 0;
}
