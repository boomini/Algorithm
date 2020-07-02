#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	vector<pair<int, string> > v;
	v.push_back(pair<int,string>(90,"捞捞捞"));
	v.push_back(pair<int,string>(98,"募募募"));
	v.push_back(pair<int,string>(67,"快快快"));
	v.push_back(pair<int,string>(78,"酒扼扼"));
	v.push_back(pair<int,string>(99,"快府府"));
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<v.size(); i++){
		cout << v[i].second << ' ';
	} 
	return 0; 
} 
