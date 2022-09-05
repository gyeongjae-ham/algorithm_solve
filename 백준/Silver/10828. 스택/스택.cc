#include <bits/stdc++.h>

using namespace std;
int T;
string s;
stack<int> stk;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>T;
    
    while (T--) {
        cin>>s;
        if (s == "push") {
            int n;
            cin>>n;
            stk.push(n);
        }
        if (s=="top") {
            if (stk.empty()==1) {
                cout<<-1<<"\n";
            }
            else {
                cout<<stk.top()<<"\n";
            }
        }
        if (s=="pop") {
            if (stk.empty()==1) {
                cout<<-1<<"\n";
            }
            else {
                cout<< stk.top() <<"\n";
                stk.pop();
            }
        }
        if (s=="size") {
            cout<<stk.size()<<"\n";
        }
        if (s=="empty") {
            if (stk.empty()==1) {
                cout<<1<<"\n";
            }
            else {
                cout<<0<<"\n";
            }
        }
    }
    return 0;
}