#include <stdio.h>
#include <stdlib.h>
int biggo=0;
void Merge(int arr[],int left,int mid, int right){//10 0 7 1 6 7 7 6 5 4       21
	int i,j,t;
    int *tmp=(int*)malloc(sizeof(int)*(right-left+1));	
	i=left;
	j=mid+1;
	t=0;
	while(i<=mid&&j<=right){

		if(arr[i]<arr[j]){//���ݺι迭�� �ִ°��� �Ĺݺι迭�� �ִ°����� ���ų� ������ 
			tmp[t++]=arr[i++];//tmp�� ���ݺι迭�� �ִ°��� �ְ� tmp�� �ε����� ���ݺι迭�� �ε��� ���� 
			biggo++;
		}
		else{
			tmp[t++]=arr[j++];//tmp�� ���ݺι迭�� �ִ� ���� �Ĺݺι迭�� �ִ� ������ ũ�� tmp�� �Ĺݺι迭�� �ִ°��� �ְ� tmp�� �ε����� �Ĺݺι迭�� �ε����� 
			biggo++;
		}
	}
	while(i<=mid){
		tmp[t++]=arr[i++];//���ʺκ��� �迭�� �������  
	}
	while(j<=right){
		tmp[t++]=arr[j++]; //������ �κ��� �迭�� ���� ���  
	}
		i=left;
		t=0;
	while(i<=right){
		arr[i++]=tmp[t++];//����� �ٽ� ������ �迭�� ����  

	}
		free(tmp);
}
void Mergesort(int arr[],int left, int right){
	int mid=0;
	if(left<right){
		mid=(left+right)/2;
		Mergesort(arr,left,mid);
		Mergesort(arr,mid+1,right);
		Merge(arr,left,mid,right);
	}

}
int main(){
	int n=0;
    int *arr;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
         
    Mergesort(arr,0,n-1);
	printf("%d",biggo);
 	free(arr);
    return 0;
	
}
