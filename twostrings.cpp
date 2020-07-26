#include <iostream>
#include <string>
#include <vector>
using namespace std;
void commonSubstring(vector<string> a, vector<string> b) {   
    for(int i=0; i<a.size(); i++){
        string lng, sht, ans = "NO";
        if(a[i].size()>b[i].size()){
            lng=a[i];
            sht=b[i];
        }
        else{
            lng=b[i];
            sht=a[i];
        }

        for(int j=0; j<sht.size(); j++){
            if(lng.find(sht[j])!=string::npos){
                ans="YES";
                break;
            }
        }
        cout<<ans<<endl;
    }
}

int main(void){
    string arr[10];
    string arr2[10];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
        cin>>arr2[i];
    vector<string> a,b;
    a.assign(arr,arr+n);
    b.assign(arr2, arr2+n);

    commonSubstring(a,b);

    return 0;
}
