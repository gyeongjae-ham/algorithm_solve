#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n,m,k,T;
int gr[51][51];
bool vis[51][51];
queue<pair<int, int>> Q;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void bfs(int x, int y) {
    vis[x][y] = true;
    Q.push({x, y});
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for(int dir=0;dir<4;dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(vis[nx][ny]||gr[nx][ny]!=1) continue;
            
            vis[nx][ny] = true;
            Q.push({nx, ny});
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>T;
    while(T--) {
        cin>>m>>n>>k;
        int x,y;
        for(int i=0;i<k;i++) {
            cin>>x>>y;
            gr[y][x] = 1;
        }
        
        int res = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(gr[i][j]==1 && !vis[i][j]) {
                    bfs(i,j);
                    res++;
                }
            }
        }
        
        cout<<res<<'\n';
        for(int i=0;i<n;i++) {
            fill(gr[i], gr[i]+m, 0);
            fill(vis[i], vis[i]+m, false);
        }
    }
}