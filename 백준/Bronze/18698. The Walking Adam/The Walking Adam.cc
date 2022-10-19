#include <bits/stdc++.h>

using namespace std;

int t;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int cnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='D') break;
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}