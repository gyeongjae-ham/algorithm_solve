#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int dif[1002][1002];
int dis[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int w,h,T;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>T;
    while(T--) {
        queue<pair<int, int>> Qf;
        queue<pair<int, int>> Qs;

        string gr[1002];
        bool esc = false;
        cin>>w>>h;
        for(int i=0;i<h;i++) cin>>gr[i];
        for(int i=0;i<h;i++) {
            fill(dif[i], dif[i]+w, 0);
            fill(dis[i], dis[i]+w, 0);
        }
        
        for(int i=0;i<h;i++) {
            for(int j=0;j<w;j++) {
                if(gr[i][j]=='*') {
                    Qf.push({i,j});
                    dif[i][j]=1;
                }
                if(gr[i][j]=='@') {
                    Qs.push({i,j});
                    dis[i][j]=1;
                }
            }
        }
        
        while(!Qf.empty()) {
            auto d = Qf.front(); Qf.pop();
            for(int k=0;k<4;k++) {
                int nx = d.X + dx[k];
                int ny = d.Y + dy[k];
                if(nx<0||nx>=h||ny<0||ny>=w) continue;
                if(dif[nx][ny]||gr[nx][ny]=='#') continue;
                dif[nx][ny] = dif[d.X][d.Y]+1;
                Qf.push({nx,ny});
            }
        }
        
        while((!Qs.empty()) && (!esc)) {
            auto d = Qs.front(); Qs.pop();
            for(int k=0;k<4;k++) {
                int nx = d.X + dx[k];
                int ny = d.Y + dy[k];
                if(nx<0||nx>=h||ny<0||ny>=w) {
                    cout<<dis[d.X][d.Y]<<'\n';
                    esc = true;
                    break;
                }
                if(dis[nx][ny]||gr[nx][ny]=='#') continue;
                if(dif[nx][ny]!=0&&dif[nx][ny]<=dis[d.X][d.Y]+1) continue;
                dis[nx][ny] = dis[d.X][d.Y]+1;
                Qs.push({nx,ny});
            }
        }
        if(!esc) cout<<"IMPOSSIBLE\n";
    }
    return 0;
}