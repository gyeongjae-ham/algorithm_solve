#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
stack<int> S;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        if(s=="push") {
            int num;
            cin>>num;
            S.push(num);
        }
        else if(s=="pop") {
            if(S.empty()) cout<<-1<<'\n';
            else {
                cout<<S.top()<<'\n';
                S.pop();
            }
        }
        else if(s=="size") cout<<S.size()<<'\n';
        else if(s=="empty") cout<<S.empty()<<'\n';
        else {
            if(S.empty()) cout<<-1<<'\n';
            else cout<<S.top()<<'\n';
        }
    }
    return 0;
}