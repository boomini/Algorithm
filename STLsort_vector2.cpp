#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool campare(pair<string, pair<int, int> >a,
			pair<string, pair<int, int> >b){
				if(a.second.first==b.second.first){
					return a.second.second>b.second.second;
				}else {
					return a.second.first>b.second.first;
				}
			}
int main(void){
	vector<pair<string,pair<int, int> > > v;
	v.push_back(pair<string,pair<int, int> >("이이이",pair<int,int>(98,19961222)));
	v.push_back(pair<string,pair<int, int> >("주주주",pair<int,int>(85,19930518)));
	v.push_back(pair<string,pair<int, int> >("하늘",pair<int,int>(98,19930203)));
	v.push_back(pair<string,pair<int, int> >("상상",pair<int,int>(77,19921207)));
	v.push_back(pair<string,pair<int, int> >("상강강강",pair<int,int>(80,19900302)));
	
	sort(v.begin(), v.end(), campare);
	
	for(int i=0; i<v.size(); i++){
		cout << v[i].first << ' ';
	} 
	return 0; 
} 
