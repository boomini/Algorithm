#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> q;
	int sum=0;
	int time=0;
	int i=0;
	while(1){
		time++;
		if(q.size() == bridge_length){
			sum -= q.front();
			q.pop();
		}
		
		if(sum + truck_weights[i]<=weight){
			if(i == truck_weights.size()-1){
				return time+=bridge_length;
				break;
			}
			q.push(truck_weights[i]);
			sum+=truck_weights[i];
			i++;
		}
		else if(sum+truck_weights[i]>weight){
			q.push(0);
		}
		
	}
	return time;
}

void print(int bridge_length,int weight, vector<int> numbers, int answer){
	int t = solution(bridge_length, weight, numbers);
	if(t == answer)
		cout << "정답" << endl;
	else{
		cout << "틀림" << endl;
		cout << t << endl ;
	}
		 
}
int main(void){
//	print(2,10,{7,4,5,6},8);
//	print(100,100,{10},101);
	print(100,100,{10,10,10,10,10,10,10,10,10,10},110);
	return 0;
} 
