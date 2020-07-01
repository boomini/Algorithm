#include <stdio.h>

//시간제한이 있으므로 O(N*logN)을 이용하여야 한다. 
int n, data[1000001];
void quicksort(int *data, int start, int end){
	if(start>=end){
		return;
	}	
	int key=start;
	int i=start+1;
	int j=end;
	int temp;
	while(i<=j){
		while(data[i]<=data[key]){
			i++;
		}
		while(data[key]<=data[j] && j>start){
			j--;
		}
		if(i>j){
			temp=data[j];
			data[j]=data[key];
			data[key]=temp;
		}else{
			temp=data[i];
			data[i]=data[j];
			data[j]=temp;
		}
		
	}
	quicksort(data,start,j-1);
	quicksort(data,j+1,end);
}

int main(void){
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&data[i]);
	}
	quicksort(data,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d\n", data[i]);
	}
}
