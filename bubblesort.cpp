#include <stdio.h>
#include <stdlib.h>


int main(){
	int change=0;
	int n=0;//입력크기변수 
	int temp;
	int *arr;//동적할당을 위한 포인터 변 수 
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);//n만큼 할당되는 배열의 크기가 지정. 
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);//배열에 n만큼의 숫자 입력받음.  
	for(int i=0;i<n-1;i++){
		for(int j=0;j<(n-i)-1;j++){
			if(arr[j]>arr[j+1])	{
				change++;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
	printf("%d",change);
	free(arr);
	return 0;
}
