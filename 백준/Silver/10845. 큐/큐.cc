#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

queue<int> Q;
    
int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin>>n;
    
    while(n--) {
        string s;
        cin>>s;
        
        if(s=="push") {
            int v;
            cin>>v;
            Q.push(v);
        }
        else if(s=="pop") {
            if(Q.empty()) cout<<-1<<'\n';
            else {
                cout<<Q.front()<<'\n';
                Q.pop();
            }
        }
        else if(s=="size") cout<<Q.size()<<'\n';
        else if(s=="empty") cout<<Q.empty()<<'\n';
        else if(s=="front") {
            if(Q.empty()) cout<<-1<<'\n';
            else cout<<Q.front()<<'\n';
        }
        else {
            if(Q.empty()) cout<<-1<<'\n';
            else cout<<Q.back()<<'\n';
        }
    }
}