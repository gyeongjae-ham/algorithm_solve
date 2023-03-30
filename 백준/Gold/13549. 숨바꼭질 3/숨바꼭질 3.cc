#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,k;
int dist[200002];
int main(void) {
    fastio;
    cin>>n>>k;
    int MX = 200000;
    // init dist
    fill(dist, dist+MX, -1);
    
    deque<int> dq;
    dq.push_back(n);
    dist[n] = 0;
    while(!dq.empty()) {
        int cur = dq.front(); dq.pop_front();
        // 범위 안이라면 순간이동을 먼저 처리해주고 dist는 안늘리고 이전 dist 값 그대로
        if(2*cur < MX && dist[2*cur]==-1) {
            dist[2*cur] = dist[cur];
            dq.push_front(2*cur);
        }
        
        for(int nxt: {cur-1, cur+1}) {
            if(nxt < 0 or nxt >= MX or dist[nxt] != -1) continue;
            dist[nxt] = dist[cur] + 1;
            dq.push_back(nxt);
        }
    }
    cout<<dist[k];
    return 0;
}