#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	vector<pair<int, string> > v;
	v.push_back(pair<int,string>(90,"������"));
	v.push_back(pair<int,string>(98,"ļļļ"));
	v.push_back(pair<int,string>(67,"����"));
	v.push_back(pair<int,string>(78,"�ƶ��"));
	v.push_back(pair<int,string>(99,"�츮��"));
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<v.size(); i++){
		cout << v[i].second << ' ';
	} 
	return 0; 
} 
