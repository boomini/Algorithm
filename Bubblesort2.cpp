#include <stdio.h>

//�����ϱ� ���� ������, ȿ������ ���� �������� �˰����� 
int main(void){
	int i, j, temp;
	int array[10]={1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for (int i=0; i<10; i++){	
		for(int j=0; j<9-i; j++){
			if(array[j+1]<array[j]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}	 
	
	for(int i=0; i<10; i++){
		printf("%d ", array[i]);
	}
}