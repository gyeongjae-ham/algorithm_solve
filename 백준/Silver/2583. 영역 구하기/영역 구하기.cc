#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n,m,k;
int di[102][102];
int gr[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>m>>n>>k;
    while(k--) {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i=x1;i<x2;i++) {
            for(int j=y1;j<y2;j++) {
                gr[i][j] = 1;
            }
        }
    }
    
    int cnt = 0;
    vector<int> ans;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(gr[i][j]==1||di[i][j]==1) continue;
            queue<pair<int,int>> Q;
            di[i][j] = 1;
            Q.push({i,j});
            int width = 1;
            cnt++;
            
            while(!Q.empty()) {
                auto cur = Q.front(); Q.pop();
                for(int d=0;d<4;d++) {
                    int nx = cur.X + dx[d];
                    int ny = cur.Y + dy[d];
                    if(nx<0||nx>=n||ny<0||ny>=m) continue;
                    if(di[nx][ny]==1||gr[nx][ny]==1) continue;
                    
                    di[nx][ny] = 1;
                    Q.push({nx,ny});
                    width++;
                }
            }
            ans.push_back(width);
        }
    }
    sort(ans.begin(), ans.end());
    cout<<cnt<<'\n';
    for(auto c: ans) cout<<c<<' ';
}