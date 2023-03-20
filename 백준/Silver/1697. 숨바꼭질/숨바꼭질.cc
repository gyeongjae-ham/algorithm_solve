#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n,k;
int di[100002];

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n>>k;
    queue<int> Q;
    fill(di, di+100001, -1);
    di[n] = 0;
    Q.push(n);
    while(di[k]==-1) {
        int cur = Q.front(); Q.pop();
        for(int nxt : {cur-1, cur+1, 2*cur}) {
            if(nxt<0||nxt>100000) continue;
            if(di[nxt]!=-1) continue;
            di[nxt] = di[cur] + 1;
            Q.push(nxt);
        }
    }
    cout<<di[k];
    return 0;
}