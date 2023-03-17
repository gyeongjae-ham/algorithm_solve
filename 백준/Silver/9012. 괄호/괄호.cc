#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cin>>n;

    while(n--) {
        stack<char> S;
        string s;
        bool isWrong = false;
        cin>>s;
        
        for(auto c:s) {
            if(c==')'){
                if(!S.empty()&&S.top()=='(') S.pop();
                else {
                    isWrong = true;
                    break;
                }
            }
            else S.push(c);
        }
        
        if(isWrong || !S.empty()) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}