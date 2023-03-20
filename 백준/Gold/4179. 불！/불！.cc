#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n,m;
string gr[1002];
int di1[1002][1002];
int di2[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n>>m;
    queue<pair<int, int>> Q1;
    queue<pair<int, int>> Q2;
    
    for(int i=0;i<n;i++) cin>>gr[i];
    for(int i=0;i<n;i++) {
        fill(di1[i], di1[i]+m, -1);
        fill(di2[i], di2[i]+m, -1);
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(gr[i][j]=='F') {
                Q1.push({i,j});
                di1[i][j] = 0;
            }
            if(gr[i][j]=='J') {
                Q2.push({i,j});
                di2[i][j] = 0;
            }
        }
    }
    
    // fire moving
    while(!Q1.empty()) {
        auto cur = Q1.front(); Q1.pop();
        for(int dir=0;dir<4;dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(di1[nx][ny]>=0||gr[nx][ny]=='#') continue;
            
            di1[nx][ny] = di1[cur.X][cur.Y] + 1;
            Q1.push({nx, ny});
        }
    }
    
    // Jihoon moving
    while(!Q2.empty()) {
        auto cur = Q2.front(); Q2.pop();
        for(int dir=0;dir<4;dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx<0||nx>=n||ny<0||ny>=m) {
                cout<<di2[cur.X][cur.Y] + 1;
                return 0;
            }
            
            if(di2[nx][ny]>=0||gr[nx][ny]=='#') continue;
            // Skip if fire already arrived there
            if(di1[nx][ny]!=-1 && di1[nx][ny]<=di2[cur.X][cur.Y] + 1) continue;
            di2[nx][ny] = di2[cur.X][cur.Y] + 1;
            Q2.push({nx, ny});
        }
    }
    
    cout<<"IMPOSSIBLE";
    return 0;
}