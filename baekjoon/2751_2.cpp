#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int n=0;
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++){
		//scanf("%d",&array[i]);
		cin >> array[i];
	}
	
	sort(array,array+n);
	for(int i=0; i<n; i++){
		//printf("%d",array[i]);
		cout << array[i] <<"\n";
	}
}
