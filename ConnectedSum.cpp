#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <string.h>
using namespace std;

//�θ� ��带 ã�� �Լ� 
int getParent(int parent[], int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

// �� �θ� ��带 ��ġ�� �Լ� 
int unionParent(int parent[], int a, int b){
	a= getParent(parent, a);
	b= getParent(parent, b);
	
	if(a<b) parent[b] = a;
	else parent[a] = b;
	return 0;
} 

int connectedSum(int n, vector<string> edges) {
	int parent[n];
	int count[n];
	int sum=0;

	for(int i=0; i< n; i++){
		parent[i] = i;
		count[i] = 0;
	}
	for(int i=0; i<edges.size();i++){
		vector<string> strArr;
		// CŸ�� ���ڿ��� ��ȯ
		char *buffer = new char[1000];
		strcpy(buffer, edges[i].c_str());
	
		// ���ڿ� �ڸ���
		char *tok = strtok(buffer, " ");
		while(tok != NULL) {
			// strArr[strCnt++] = string(tok);
			strArr.push_back(string(tok));
			tok = strtok(NULL, " ");
		}
	
		int u;
		int v;
		// Ȯ��

			u = atoi(strArr[0].c_str());
		    v = atoi(strArr[1].c_str());


      //  cout << u<<" "<<v<<endl;
	//	cout<<n1<<" "<<n2<<endl;
		unionParent(parent,u-1,v-1);
	}
	for(int i=1; i<=n; i++){
		int p=getParent(parent,i-1);
		count[p]++;
	//	cout<<p<<endl;
		
	}
	for(int i=0; i<n; i++){
	//	cout<<count[i]<<endl;
		if(count[i]!=0){
			sum+=ceil(sqrt(count[i]));
		}
	}
	return sum;
}

int main(void){
	vector<string> edges={"1 2","1 3","2 4","3 5","7 8"};
	int n;
	n=10;
	cout << connectedSum(n,edges);
}
