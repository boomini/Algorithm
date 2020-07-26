#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(string a,string b){
	if(a+b>b+a)
		return 1;
	else 
		return 0;
//	else
//		return a>b;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> number;

    for(int i=0; i<numbers.size(); i++){
    	number.push_back(to_string(numbers[i]));
	}
    sort(number.begin(),number.end(),compare);
    
    if(number.at(0) == "0") return "0";
    
    for(int i=0; i<number.size(); i++){
    	answer.append(number[i]);
	}
    
    return answer;
}
void print(vector<int> numbers, string answer){
	string t = solution(numbers);
	if(t == answer)
		cout << "정답" << endl;
	else{
		cout << "틀림" << endl;
		cout << t ;
	}
		 
}
int main(void){
	int arr[10]={6,10,2};
	vector<int> vec;
	vec.assign(arr,arr+3);
	cout<<solution(vec);
	print({6,10,2},"6210");
	print({3,30,34,5,9},"9534330");
	print({0,0,0,0,0,0,0},"0");
	return 0;
} 
