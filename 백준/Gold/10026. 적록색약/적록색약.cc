#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

char gr[101][101];
bool vis[101][101];
int n;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void bfs(int x, int y) {
    queue<pair<int, int>> Q;
    Q.push({x, y});
    vis[x][y]=1;
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for(int d=0;d<4;d++) {
            int nx = cur.X + dx[d];
            int ny = cur.Y + dy[d];
            
            if(nx<0||nx>=n||ny<0||ny>=n) continue;
            if(vis[nx][ny]||gr[x][y]!=gr[nx][ny]) continue;
            vis[nx][ny] = 1;
            Q.push({nx,ny});
        }
    }
}

int area() {
    int cnt = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(!vis[i][j]){
                bfs(i,j);
                cnt++;
            }
        }
    }
    return cnt;
}

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cin>>gr[i][j];
        }
    }
    
    int not_c = area();
    
    for(int i=0;i<n;i++) fill(vis[i], vis[i]+n, false);
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(gr[i][j]=='G') gr[i][j]='R';
        }
    }
    
    int cl = area();
    
    cout<<not_c<<' '<<cl;
    return 0;
}