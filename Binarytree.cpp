#include <iostream>
//포인트르 사용하기 때문에 완전이진트리가 아니여도 괜찮다. 
using namespace std;

int number = 15;

//하나의 노드 정보를 선언합니다.
//구조체에서 함수를 추가한게 클래스 
typedef struct node *treePointer; 
typedef struct node{
	int data;
	treePointer leftChild, rightChild;
}node;

//중위 순회르 구현
void inorder(treePointer ptr){
	if(ptr){
		inorder(ptr->leftChild);
		cout << ptr -> data << ' ';
		inorder(ptr->rightChild);
	}
} 
//후위 순회르 구현
void postorder(treePointer ptr){
	if(ptr){		
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		cout << ptr -> data << ' ';
	}
} 

//전위 순회르 구현
void preorder(treePointer ptr){
	if(ptr){
		cout << ptr -> data << ' ';
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
} 

int main(void){
	node nodes[number + 1];
	for(int i=1; i<=number; i++){
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}
	for(int i=1; i<= number; i++){
		if(i%2 == 0){
			nodes[i/2].leftChild = &nodes[i];
		}
		else{
			nodes[i/2].rightChild = &nodes[i];
		}
	}
	preorder(&nodes[1]);
	cout << endl;
	inorder(&nodes[1]);
	cout << endl;
	postorder(&nodes[1]);
	
}
