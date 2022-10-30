#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string tmp = "aiueo";
    cin>>n>>s;
    
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<tmp.length();j++){
            if(s[i]==tmp[j]) cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}