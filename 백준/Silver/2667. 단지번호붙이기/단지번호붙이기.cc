#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n;
string gr[27];
bool vis[27][27];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue<pair<int,int>> Q;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>gr[i];
    int cnt = 0;
    vector<int> ans;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(gr[i][j]=='0'||vis[i][j]==1) continue;
            vis[i][j]=1;
            Q.push({i,j});
            int width=1;
            cnt++;
            
            while(!Q.empty()) {
                auto v = Q.front(); Q.pop();
                for(int d=0;d<4;d++) {
                    int nx = v.X + dx[d];
                    int ny = v.Y + dy[d];
                    if(nx<0||nx>=n||ny<0||ny>=n) continue;
                    if(vis[nx][ny]||gr[nx][ny]=='0') continue;
                    width++;
                    vis[nx][ny]=1;
                    Q.push({nx,ny});
                }
            }
            ans.push_back(width);
        }
    }
    sort(ans.begin(), ans.end());
    cout<<cnt<<'\n';
    for(auto c:ans) cout<<c<<'\n';
}