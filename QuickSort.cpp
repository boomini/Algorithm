#include <stdio.h>
#include <stdlib.h>
int biggo=0;
int partition(int arr[],int p,int r){
	int x=arr[r];
	int i=p-1;
	int temp1=0;
	int temp2=0;
	for(int j=p;j<=r-1;j++){
		if(arr[j]<=x){
			i++;
			temp1=arr[i];
			arr[i]=arr[j];
			arr[j]=temp1;
			biggo++;
		}


	}
	i=i+1;
	temp2=arr[i];
	arr[i]=arr[r];
	arr[r]=temp2;
	biggo++;
	return i;
	
}
void QuickSort(int arr[],int p,int r){
	if(p<r){
		int q=partition(arr,p,r);
		QuickSort(arr,p,q-1);
		QuickSort(arr,q+1,r);
	}
}
int main(){
	int n=0;
    int *arr;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
         
    QuickSort(arr,0,n-1);
	printf("%d",biggo);
 	free(arr);
    return 0;
	
}
