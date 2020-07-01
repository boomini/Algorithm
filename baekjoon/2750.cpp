#include <stdio.h>

int array[1001];

int main(void){
	int n,temp,index,min;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&array[i]);
	}
//	for(int i=0; i<n; i++){
//		for(int j=i; j<n; j++){
//			if(array[i]>array[j]){
//			temp=array[i];
//			array[i]=array[j];
//			array[j]=temp;				
//			}
//		}
//	}
	
	for(int i=0; i<n; i++){
		min = 1001;
		for(int j=i; j<n; j++){
			if(min>array[j]){
				min=array[j];
				index=j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(int i=0; i<n; i++){
		printf("%d ",array[i]);
	}
	
}
