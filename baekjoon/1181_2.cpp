#include <iostream>
#include <algorithm>

using namespace std;

string word[20001];
int n;

bool compare(string a, string b){
	if(a.length()==b.length())
		return a<b;
	else
		return a.length()<b.length();
}

int main(void){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> word[i];
	}
	sort(word,word+n,compare);
	
	for(int i=0; i<n; i++){
		if(i>0 && word[i] == word[i-1]){
			continue;
		}else{
			cout << word[i] << "\n";
		}
			
	}
}
