#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true) {
        stack<char> S;
        string s;
        getline(cin, s);
        int isWrong = 1;
        
        if(s==".") break;
        
        for(auto c: s) {
            if (c=='(' || c=='[') S.push(c);
            else if (c==')') {
                if(!S.empty()&&S.top()=='(') S.pop();
                else {
                    isWrong = 0;
                    break;
                }
            }
            else if (c==']') {
                if(!S.empty()&&S.top()=='[') S.pop();
                else {
                    isWrong = 0;
                    break;
                }
            }
            else continue;
        }
        
        if (isWrong == 0 || !S.empty()) cout<<"no\n";
        else cout<<"yes\n";
    }

  return 0;
}