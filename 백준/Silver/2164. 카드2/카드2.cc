#include <bits/stdc++.h>

using namespace std;
int n, i;
queue<int> q;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    for(i=1;i<=n;i++){
        q.push(i);
    }
    
    while(q.size()!=1) {
        q.pop();
        int tmp = q.front();
        q.push(tmp);
        q.pop();
    }
    cout<<q.front()<<"\n";
    
    return 0;
}