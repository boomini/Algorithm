#include <iostream>
#include <algorithm>

using namespace std;

string a[1001];
int n;
int getSum(string a){
	int length = a.length(), sum =0;
	for(int i=0; i<length; i++){
		//숫자인 경우에만 더한다.
		if(a[i]- '0' <= 9 && a[i]- '0'>=0){
			sum += a[i]- '0';
		} 
	}
	return sum;
}
bool compare(string a, string b){
	if(a.length()==b.length()){
		int aSum = getSum(a);
		int bSum = getSum(b);
		if(aSum<bSum){
			return 1;
		}else if(aSum>bSum){
			return 0;
		}else{
			return a<b;
		}
		
	}else{
		return a.length()<b.length();
	}
}
int main(void){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i]; 
	}
	sort(a,a+n,compare);
	for(int i=0; i<n; i++){
		cout << a[i] << '\n';
	}
	return 0;
}
