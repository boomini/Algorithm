#include <stdio.h>
#include <stdlib.h>


int main(){
	int change=0;
	int n=0;//�Է�ũ�⺯�� 
	int temp;
	int *arr;//�����Ҵ��� ���� ������ �� �� 
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);//n��ŭ �Ҵ�Ǵ� �迭�� ũ�Ⱑ ����. 
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);//�迭�� n��ŭ�� ���� �Է¹���.  
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
