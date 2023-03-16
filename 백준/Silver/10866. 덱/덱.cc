#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

deque<int> DQ;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        if(s=="push_back") {
            int num;
            cin>>num;
            DQ.push_back(num);
        }
        else if(s=="push_front") {
            int num;
            cin>>num;
            DQ.push_front(num);
        }
        else if(s=="pop_front") {
            if(!DQ.empty()) {
                cout<<DQ.front()<<'\n';
                DQ.pop_front();
            }
            else cout<<-1<<'\n';
        }
        else if(s=="pop_back") {
            if(!DQ.empty()) {
                cout<<DQ.back()<<'\n';
                DQ.pop_back();
            }
            else cout<<-1<<'\n';
        }
        else if(s=="size") cout<<DQ.size()<<'\n';
        else if(s=="empty") cout<<DQ.empty()<<'\n';
        else if(s=="front") {
            if (!DQ.empty()) cout<<DQ.front()<<'\n';
            else cout<<-1<<'\n';
        }
        else {
            if (!DQ.empty()) cout<<DQ.back()<<'\n';
            else cout<<-1<<'\n';
        }
    }
}