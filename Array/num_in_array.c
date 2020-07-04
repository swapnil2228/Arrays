/*accept array from user and display numbers which has 7 in it. 
Input:24, 37,56,71
Output:37, 71*/
#include<stdio.h>
#include<malloc.h>
void chk_number(int arr[],int isize,int ino){
	int i=0,temp=0,dig=0;
	for(i=0;i<isize;i++){
		temp=arr[i];
		while(temp!=0){
			dig=temp%10;
			if(dig==ino)
				printf("%d\t",arr[i]);
			temp=temp/10;
		}
	}
}

int main(){
	int i=0,size=0,no=0;
	int *arr=NULL;
	printf("how many numbers??");
	scanf("%d",&size);
	printf("enter the elements");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("enter the number which you want to in array init");
	scanf("%d",&no);
	chk_number(arr,size,no);
	return 0;
}
