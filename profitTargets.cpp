#include <iostream>
#include <vector>
using namespace std;
int stockPairs(vector<int> stocksProfit, long target) {
	int count=0;
	vector<int> used;
    for(int i=0; i<stocksProfit.size(); i++){
    	for(int j=0; j<stocksProfit.size(); j++){
    		if(i==j)continue;
    		if(stocksProfit[i]+stocksProfit[j]==target){
    			count++;
    			//cout <<count<<" "<< stocksProfit[i] <<" "<< stocksProfit[j] <<endl;
    			for(int k=0;k<used.size();k++){
    				if(used[k]==stocksProfit[i] || used[k]==stocksProfit[j]){
    			//	cout <<used[k]<<" "<< stocksProfit[i] <<" "<< stocksProfit[j]  <<endl;
					count--;				
					}
				}
    			used.push_back(stocksProfit[j]);
			}
		}
	}
	return count;
}
int main(void){
	vector<int> edges={6,12,3,9,3,5,1};
	int target;
	target=12;
	cout << stockPairs(edges,target);
}
