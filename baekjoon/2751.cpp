#include <stdio.h>

//시간제한이 있으므로 O(N*logN)을 이용하여야 한다. 
int sorted[1000001];

void merge(int array[], int start, int middle, int end){
	int i=start;
	int j=middle+1;
	int k=start;
	
	while(i<=middle && j<=end){
		if(array[i]<=array[j]){
			sorted[k]=array[i];
			i++;
		}else{
			sorted[k]=array[j];
			j++;
		}
		k++;
	}
	if(i>middle){
		for (int t=j; t<=end; t++){
			sorted[k]=array[t];
			k++;
		}
	}else{
		for(int t=i; t<=middle; t++){
			sorted[k]=array[t];
			k++;
		}
	}
	
	for(int t=start; t<=end; t++){
		array[t]=sorted[t];
	}
}

void mergeSort(int array[],int start, int end){
	if(start<end){
		int middle=(start+end)/2;
		mergeSort(array,start,middle);
		mergeSort(array,middle+1,end);
		merge(array,start,middle,end);
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	int array[n];
	for(int i=0; i<n; i++){
		scanf("%d",&array[i]);
	}
	mergeSort(array,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d\n", array[i]);
	}
	
}
