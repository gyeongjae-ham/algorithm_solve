#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n, mc, ml;
int gr[102][102];
int vis[102][102];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void bfs(int x, int y, int limit){
    queue<pair<int, int>> q;
    vis[x][y]=1;
    q.push({x,y});
    
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int d=0;d<4;d++){
            int nx = cur.X+dx[d];            
            int ny = cur.Y+dy[d];
            
            if(nx<0||nx>=n||ny<0||ny>=n) continue;
            if(vis[nx][ny]==0&&gr[nx][ny]>limit){
                vis[nx][ny]=1;
                q.push({nx,ny});
            } 
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // input info
            cin>>gr[i][j];
            // find max rain limit
            ml = max(gr[i][j], ml);
        }
    }
    
    for(int lm=0;lm<=ml;lm++){
        // init vis
        for(int i=0;i<n;i++) fill(vis[i], vis[i]+n, 0);
        
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // if ground upper than limit and don't visit ever do bfs
                if(gr[i][j]>lm&&!vis[i][j]) {
                    bfs(i,j,lm);
                    cnt++;
                }
            }
        }
        // check max cnt
        mc = max(cnt, mc);
    }
    cout<<mc;
    return 0;
}