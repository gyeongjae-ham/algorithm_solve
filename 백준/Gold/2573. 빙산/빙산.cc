#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,m,year;
int br[303][303];
int vs[303][303];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

// check range
bool check(int x, int y) {
  return (x>=0 && x<n && y>=0 && y<m);
}

// init vs
void initvs() {
  for(int i=0;i<n;i++) fill(vs[i], vs[i]+m, 0);
}

// 1년 녹이기
void melting() {
  int zero[303][303] = {0};
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      if(br[i][j]==0) continue;
      for(int d=0;d<4;d++) {
        int nx = i + dx[d];
        int ny = j + dy[d];
        
        if(check(nx,ny) && br[nx][ny]==0) zero[i][j]++;
      }
    }
  }
  
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      br[i][j] = max(0, br[i][j] - zero[i][j]);
    }
  }
}

// 빙산 몇 개인지 확인
int status() {
  int x=0, y=0;
  int cnt1=0;
  // 안녹은 개수 확인
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      if(br[i][j]) {
        x = i;
        y = j;
        cnt1++;
      }
    }
  }
  
  // 다 녹았으면 0
  if(cnt1==0) return 0;
  int cnt2=0;
  queue<pair<int,int>> q;
  vs[x][y] = 1;
  q.push({x,y});
  
  while(!q.empty()) {
    auto cur = q.front(); q.pop();
    cnt2++;
    for(int d=0;d<4;d++) {
      int nx = cur.X + dx[d];
      int ny = cur.Y + dy[d];
      
      if(!check(nx,ny) || br[nx][ny] <= 0 || vs[nx][ny] == 1) continue;
      vs[nx][ny] = 1;
      q.push({nx, ny});
    }
  }
  
  // 한 지점 주변의 개수를 다 더한게 전체 개수랑 같다면 아직 한 덩어리 상태
  if(cnt1 == cnt2) return 1;
  return 2;
}

int main(void) {
  fastio;
  cin>>n>>m;
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
    cin>>br[i][j];
  
  while(true) {
    // 1년 추가해주고
    year++;
    // 그만큼 녹여주고
    melting();
    // 다시 방문 초기화 후에
    initvs();
    
    // 개수 확인 후 반복
    int check = status();
    if(check==0) {
      cout<<0;
      return 0;
    }
    else if(check==1) continue;
    else break;
  }
  cout<<year;
  
  return 0;
}