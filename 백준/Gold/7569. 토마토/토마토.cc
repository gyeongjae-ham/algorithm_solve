#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int gr[103][103][103];
int di[103][103][103];
int n, m, h;
int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>m>>n>>h;
    queue<tuple<int,int,int>> Q;
    for(int i=0;i<h;i++) {
        for(int j=0;j<n;j++) {
            for(int k=0;k<m;k++) {
                int tmp;
                cin >> tmp;
                gr[j][k][i]=tmp;
                if(tmp==1) Q.push({j, k, i});
                if(tmp==0) di[j][k][i]=-1;    
            }
        }
    }
    
    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        int curX, curY, curZ;
        tie(curX, curY, curZ) = cur;
        
        for(int dir=0;dir<6;dir++) {
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            int nz = curZ + dz[dir];
            
            if(nx<0||nx>=n||ny<0||ny>=m||nz<0||nz>=h) continue;
            if(di[nx][ny][nz]>=0) continue;
            di[nx][ny][nz] = di[curX][curY][curZ] + 1;
            Q.push({nx, ny, nz});
        }
    }
    
    int ans = 0;
    for(int i=0;i<h;i++) {
        for(int j=0;j<n;j++) {
            for(int k=0;k<m;k++) {
                if(di[j][k][i]==-1) {
                    cout<<-1;
                    return 0;
                }
                ans = max(ans, di[j][k][i]);    
            }
        }
    }
    cout<<ans;
    return 0;
}