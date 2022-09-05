#include <bits/stdc++.h>

using namespace std;
int n, i;
string s;
queue<int> q;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="push") {
            int num;
            cin>>num;
            q.push(num);
        }
        if(s=="pop"){
            if(!q.empty()){
                cout<<q.front()<<"\n";
                q.pop();
            }
            else cout<<-1<<"\n";
        }
        if(s=="size"){
            cout<<q.size()<<"\n";
        }
        if(s=="empty"){
            if(q.empty()){
                cout<<1<<"\n";
            }
            else cout<<0<<"\n";
        }
        if(s=="front"){
            if(!q.empty()) cout<<q.front()<<"\n";
            else cout<<-1<<"\n";
        }
        if(s=="back"){
            if(!q.empty()) cout<<q.back()<<"\n";
            else cout<<-1<<"\n";
        }
    }
    return 0;
}