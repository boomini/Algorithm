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

		if(arr[i]<arr[j]){//전반부배열에 있는값이 후반부배열에 있는값보다 같거나 작으면 
			tmp[t++]=arr[i++];//tmp에 전반부배열에 있는값을 넣고 tmp의 인덱스와 전반부배열의 인덱스 증가 
			biggo++;
		}
		else{
			tmp[t++]=arr[j++];//tmp에 전반부배열에 있는 값이 후반부배열에 있는 값보다 크면 tmp에 후반부배열에 있는값을 넣고 tmp의 인덱스와 후반부배열의 인덱스증 
			biggo++;
		}
	}
	while(i<=mid){
		tmp[t++]=arr[i++];//왼쪽부분의 배열이 남은경우  
	}
	while(j<=right){
		tmp[t++]=arr[j++]; //오른쪽 부분의 배열이 남은 경우  
	}
		i=left;
		t=0;
	while(i<=right){
		arr[i++]=tmp[t++];//결과를 다시 원래의 배열에 저장  

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
