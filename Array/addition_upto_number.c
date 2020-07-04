/*Accept array and one number and return addition that numbers elements onlyy.
input: 3 2 7 5 2 9 
       3
output: 12 (3+2+7)
int addNo(int arr[],int size,int num);*/

#include<stdio.h>
#include<malloc.h>
int addition(int arr[],int isize,int num){
	int i=0,sum=0,j=0;
	if(num>isize)
		num=isize;
	for(i=0;i<num;i++){
			sum=sum+arr[i];
		}
	return sum;
}
int main(){
	int i=0,size=0,num=0,add=0;
	int *arr=NULL;
	printf("how many number you want");
	scanf("%d",&size);
	printf("enter the number");
	arr=(int *)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("enter the range of element which you want to add");
	scanf("%d",&num);
	add=addition(arr,size,num);
	printf("\n----------------------\n");
	printf("total:%d",add);
	return 0;


}
