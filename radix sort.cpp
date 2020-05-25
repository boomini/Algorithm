#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

int radixSort(int *A,int n,int k,int t){
	queue<int> que[10];
	int p=1;
	int d=1;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			d=A[j]/(int)pow(10,i-1)%10;
			que[d].push(A[j]);
		}
		p=1;
		for(int j=0;j<10;j++){
			while(!que[j].empty()){
				A[p]=que[j].front();
				p++;
				que[j].pop();
			}
		}
		if(t==i){
			for(int j=1;j<=n;j++)
			printf("%d ",A[j]);
			break;
		}
	}
}

int main(){
	int n,t,m,k=1;
	int a[10001];
	scanf("%d %d",&n, &t);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(i==1)
			m=a[i];
		else
		if(m<a[i])
		m=a[i];	
			
	}
	for(;m/10;m/=10)
		k++;
	radixSort(a,n,k,t);
	return 0;	
	
}
