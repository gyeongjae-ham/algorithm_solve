#include <bits/stdc++.h>

using namespace std;
int t, k, i;
stack<pair<int, int>> s;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>k;
        if(s.empty()) {
            cout<<"0 ";
            s.push({i,k});
        }
        else {
            while(!s.empty()){
                if(s.top().second>k){
                    cout<<s.top().first<<" ";
                    break;
                }
                else {
                    s.pop();
                }
            }
        }
        if(s.empty()) cout<<"0 ";
        s.push({i,k});
    }
    
    return 0;
}