#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
stack<char> S;
int sum, mul=1;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>s;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='(') {
            mul *= 2;
            S.push(s[i]);
        }
        else if(s[i]=='[') {
            mul *= 3;
            S.push(s[i]);
        }
        else if(s[i]==')') {
            // check abnormal stack
            if(S.empty() || S.top() != '(') {
                cout<<0;
                return 0;
            }
            else {
                if(s[i-1]=='(') sum += mul;
                S.pop();
                mul /= 2;
            }
        }
        else {
            if(S.empty() || S.top() != '[') {
                cout<<0;
                return 0;
            }
            else {
                if(s[i-1]=='[') sum += mul;
                S.pop();
                mul /= 3;
            }
        }
    }
    
    if (S.empty()) cout<<sum;
    else cout<<0;
    return 0;
}