#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int T;
int dx[8] = {1,2,-1,-2,-2,-1,1,2};
int dy[8] = {2,1,2,1,-1,-2,-2,-1};
int di[303][303];
queue<pair<int, int>> Q;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++) fill(di[i], di[i]+n, -1);
        int x, y;
        cin>>x>>y;
        di[x][y] = 0;
        Q.push({x,y});
        int px, py;
        cin>>px>>py;
        
        while(!Q.empty()) {
            auto cur = Q.front(); Q.pop();
            for(int d=0;d<8;d++) {
                int nx = cur.X + dx[d];
                int ny = cur.Y + dy[d];
                
                if(nx<0||nx>=n||ny<0||ny>=n) continue;
                if(di[nx][ny]>=0) continue;
                di[nx][ny] = di[cur.X][cur.Y] + 1;
                Q.push({nx, ny});
            }
        }
        cout<<di[px][py]<<'\n';
    }
    return 0;
}