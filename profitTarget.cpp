#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int stockPairs(vector<int> stocksProfit, long target) {
    pair<int, int> p;
    vector<pair<int,int>> v;
    sort(stocksProfit.begin(),stocksProfit.end());
    int max = stocksProfit.back();
    long check;
    for(int i=0;i<stocksProfit.size();i++)
    {
    	check=target-stocksProfit[i];
        if(stocksProfit[i]+max>=target)
        {   
            for(int j=i+1;j<stocksProfit.size();j++)
            {
            	if(stocksProfit[i]+stocksProfit[j]>target)
            		break;
                if(stocksProfit[j]==check){
                    p = make_pair(stocksProfit[i],stocksProfit[j]);
                    v.push_back(p);
                    break;
                }
            }
        }
    }
    int count=v.size();
    for(int i=0; i<v.size(); i++){
    	for(int j=i+1; j<v.size(); j++ ){
    		if(i==j)break;
    		if(v[i]==v[j]){
    			count--;
			}
		}
	}
    return count;
}

int main(void){
	vector<int> edges={1,3,46,1,3,9};
	int target;
	target=47;
	cout << stockPairs(edges,target);
}
