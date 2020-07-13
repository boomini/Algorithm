#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int index=0;
    vector<int> sorted;
    for(int i=0; i<citations.size(); i++){
    	sorted.push_back(citations[i]);
	}
	
	sort(sorted.begin(), sorted.end());
	int num;
	int answer=0;
	for(int i=0; i<=sorted.size(); i++){
		num=0;
		for(int j=0; j<=sorted.size(); j++){
			if(sorted[j]>=i)
				num++;
				
		}
		if(i <= num)
				answer=i;
	}
	
	return answer;
}

void print(vector<int> numbers, int answer){
	int t = solution(numbers);
	if(t == answer)
		cout << "정답" << endl;
	else{
		cout << "틀림" << endl;
		cout << t ;
	}
		 
}
int main(void){
	print({3,0,6,1,5},3);
	print({5,5,5,5},4);
	print({0,0,0,0},0);
	print({2,2,2},2);
	return 0;
} 
