//최대힙 : 부모노드가 자식노드보다 큼
//힙 생성 알고리즘 : 힙정렬을 수정하기 위해  
//O(n)
#include <stdio.h>

int number =9;
int heap[9] = {7,6,5,8,3,5,9,1,6};

int main(void) {
	//먼저 전체 트리구조를 최대 힙구조로 바꿉니다. 
	for(int i=1; i<number; i++){
		int c = i;
		do {
			int root = (c-1)/2;
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c=root;
		} while(c != 0);		
	}
	//크기를 죽여가며 반복적으로 힙을 구성
	for(int i=number-1; i>= 0; i--){
		int temp = heap[0];
		heap[0] = heap[i]; //가장 큰값과 가장 마지막 원소의 값을 바꿔준다. 
		heap[i] = temp;
		int root = 0;
		int c =1;
		do{
			c=2*root +1;
			//자식 중에 더 큰 값을 찾기
			if(heap[c] < heap[c+1] && c<i-1){
				c++;
			} 
			//루트보다 자식이 더 크다면 교환
			if(heap[root] < heap[c] && c<i){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		}while(c<i);
	}
	for(int i=0; i<number; i++){
		printf("%d ",heap[i]);
	}
} 
