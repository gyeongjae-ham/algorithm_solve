#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n;
int br[101][101];
bool vs[101][101];
int ds[101][101];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

// check range
bool OOB(int x, int y) {
  return x<0 or x>=n or y<0 or y>=n;
}

// find all islands
void island() {
  // island id
  int idx = 1;
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      // 방문했거나 바다라면 continue
      if(vs[i][j] or br[i][j]==0) continue;
      queue<pair<int, int>> q;
      q.push({i,j});
      vs[i][j] = 1;
      while(!q.empty()) {
        auto cur = q.front(); q.pop();
        br[cur.X][cur.Y] = idx;
        for(int d=0;d<4;d++) {
          int nx = cur.X + dx[d];
          int ny = cur.Y + dy[d];
          if(OOB(nx, ny) or vs[nx][ny] or br[nx][ny]==0) continue;
          q.push({nx,ny});
          vs[nx][ny]=1;
        }
      }
      idx++;
    }
  }
}

int main(void) {
  fastio;
  cin>>n;
  // init
  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
    cin>>br[i][j];
  // find all islands
  island();
  // init dist array
  for(int i=0;i<n;i++) fill(ds[i], ds[i]+n, -1);
  queue<pair<int,int>> q;
  
  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
    if(br[i][j]!=0) {
      q.push({i,j});
      ds[i][j] = 0;
    }
  
  int ans = 999999;
  while(!q.empty()) {
    auto cur = q.front(); q.pop();
    for(int d=0;d<4;d++) {
      int nx = cur.X + dx[d];
      int ny = cur.Y + dy[d];
      
      if(OOB(nx,ny) or br[nx][ny] == br[cur.X][cur.Y]) continue;
      // 범위 안의 바다가 아닌 id가 같지 않은 다른 섬을 만났을 경우 거리의 합을 담아준다
      if(br[nx][ny]!=0) {
        ans = min(ans, ds[nx][ny] + ds[cur.X][cur.Y]);
      }
      else {
        // 각 섬들의 끝자락에서 바다를 만나면 섬으로 표시해주고 거리를 하나씩 늘려나간다
        br[nx][ny] = br[cur.X][cur.Y];
        ds[nx][ny] = ds[cur.X][cur.Y] + 1;
        q.push({nx, ny});
      }
    }
  }
  
  cout<<ans;
  return 0;
}