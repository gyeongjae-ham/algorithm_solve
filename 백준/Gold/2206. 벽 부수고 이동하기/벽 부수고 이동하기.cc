#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n,m;
char br[1002][1002];
int ds[1002][1002][2];
queue<tuple<int,int,int>> q;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n>>m;
    
    // init board and dis
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>br[i][j];
            ds[i][j][0] = -1;
            ds[i][j][1] = -1;
        }
    }
    
    ds[0][0][0] = ds[0][0][1] = 1;
    q.push({0,0,0});
    
    while(!q.empty()) {
        int x,y,broken;
        tie(x,y,broken) = q.front();
        if(x==n-1&&y==m-1) {
            cout<<ds[x][y][broken];
            return 0;
        }
        q.pop();
        
        for(int d=0;d<4;d++) {
            int nx = x+dx[d];
            int ny = y+dy[d];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;

            if(br[nx][ny]=='0'&&ds[nx][ny][broken]==-1) {
                ds[nx][ny][broken] = ds[x][y][broken]+1;
                q.push({nx,ny,broken});
            }
            
            // When breaking a wall
            if(!broken&&br[nx][ny]=='1'&&ds[nx][ny][1]==-1) {
                ds[nx][ny][1] = ds[x][y][broken]+1;
                q.push({nx,ny,1});
            }
        }
    }
    cout<<-1;
    return 0;
}