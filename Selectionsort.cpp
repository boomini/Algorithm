#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int arr[],int n) {
	int temp=0;
	int biggo=0;
	for(int i=n-1;i>=1;i--){
		int max=0;
		for(int j=0;j<=i;j++){
			if(arr[max]<arr[j]){
				max=j;
				biggo++;
			}
		}
		temp=arr[max];
		arr[max]=arr[i];
		arr[i]=temp;
	}
	printf("%d",biggo);
}
int main(){
	int n=0;
	int *arr;
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	SelectionSort(arr,n);

	return 0;
}

