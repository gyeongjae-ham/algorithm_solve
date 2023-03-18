#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
stack<char> S;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int cnt = 0;
    cin>>s;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='(') S.push(s[i]);
        else {
            if(s[i-1]=='(') {
                S.pop();
                cnt+=S.size();
            }
            else {
                S.pop();
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}