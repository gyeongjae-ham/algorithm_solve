#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cin>>n;
    int cnt=0;
    while(n--) {
        stack<char> S;
        string s;
        cin>>s;
        for(auto c:s) {
            if(!S.empty()&&S.top()==c) S.pop();
            else S.push(c);
        }
        if(S.empty()) cnt++;
    }
    cout<<cnt;
    return 0;
}