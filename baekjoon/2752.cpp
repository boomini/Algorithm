#include <stdio.h>

int main(void){
	int n[3],temp;
	scanf("%d",&n[0]);
	scanf("%d",&n[1]);
	scanf("%d",&n[2]);
	
	for(int i=0; i<3; i++){
		for(int j=i; j<3; j++){
			if(n[i]>n[j]){
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	}
	
	for(int i=0; i<3; i++){
		printf("%d",n[i]);
	}
}
