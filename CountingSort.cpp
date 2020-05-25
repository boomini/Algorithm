#include <stdio.h>
#include <stdlib.h>

int countingSort(int A[],int B[],int n){
	int k,MAX,MIN;
	int *C=(int*)malloc(sizeof(int)*n);
	MAX=A[0];
	MIN=A[0];
	for(int i=0;i<n;i++){
		if(A[i]>MAX)
			MAX=A[i];
		if(A[i]<MIN)
			MIN=A[i];	
	}
	k=MAX-MIN+1;
	for(int i=0;i<k;i++)
		C[i]=0;
	for(int j=0;j<n;j++)
		C[A[j]-MIN]++;
	for(int i=1;i<k;i++){
		C[i]=C[i]+C[i-1];
	}		
	for(int i=0;i<k;i++)
		printf("%d ",C[i]);
	/*for(int j=n;j>=1;j--){
		B[C[A[j]-MIN]-1]=A[j];
		C[A[j]-MIN]--;
	}*/
	}	
		


int main(){
	int n=0;
    int *A;
    int *B;
    scanf("%d",&n);
    A=(int*)malloc(sizeof(int)*n);
    B=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
         
    countingSort(A,B,n);

 	free(A);
    return 0;
	
}
