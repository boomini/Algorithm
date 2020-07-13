#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> answer;

vector<int> solution(vector<int> array, vector<vector<int> > commands) {
    int num;
    for(int i=0; i<commands.size(); i++){
    	vector<int>temp;
    	for(int j=commands[i][0]-1; j<commands[i][1]; j++)
			temp.push_back(array[j]);
		num=commands[i][2]-1;
    	sort(temp.begin(),temp.end());
    	answer.push_back(temp[num]);
	}

    return answer;
}

int main(void){
	vector<int> array;
	array.push_back(1);
	array.push_back(5);
	array.push_back(2);
	array.push_back(6);
	array.push_back(3);
	array.push_back(7);
	array.push_back(4);
	
	
	vector<vector<int> > commands({
		vector<int> ({2,5,3}),
		vector<int> ({4,4,1}),
		vector<int> ({1,7,3})	
	});

	solution(array,commands);
	
	for(int i=0; i<answer.size(); i++){
		printf("%d ", answer[i]);
	}
	return 0;
} 
