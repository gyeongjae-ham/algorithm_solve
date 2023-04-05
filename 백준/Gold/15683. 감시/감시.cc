#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1}; // 남,동,북,서
int n,m;
int br1[10][10]; // 최초 입력받은 board
int br2[10][10]; // 각 상황의 사각지대 개수를 셀 board
vector<pair<int,int>> cctv; // cctv 좌표를 저장한 벡터

bool OOB(int a, int b) {
  return a<0 or b<0 or a>=n or b>=m;
}

// (x,y)에서 dir 방향으로 전진하면서 벽을 만날 때까지 카메라를 제외한 칸을 7로 바꾸기
void upd(int x, int y, int dir) {
  dir %= 4;
  while(1) {
    x += dx[dir];
    y += dy[dir];
    if(OOB(x,y) or br2[x][y]==6) return; // 범위 벗어났거나 벽을 만나면 종료
    if(br2[x][y]!=0) continue; // 카메라면 지나가기
    br2[x][y] = 7;
  }
}

int main(void) {
  fastio;
  cin>>n>>m;
  int mn=0; // 사각 지대 최소 크기
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) {
      cin>>br1[i][j];
      if(br1[i][j]!=0 and br1[i][j]!=6) cctv.push_back({i,j});
      if(br1[i][j]==0) mn++;  
    }  
  }
  
  // 1<<(2*cctv.size()) => 4의 cctv.size 승(cctv.size 별로 모든방향(4방향) 모든 경우의 수)
  for(int tmp=0; tmp < (1<<(2*cctv.size())); ++tmp) {
    // 각 상황에 쓸 br2 초기화
    for(int i=0;i<n;++i) {
      for(int j=0;j<m;++j) {
        br2[i][j] = br1[i][j];
      }
    }
    
    int brute = tmp;
    for(int i=0;i<cctv.size(); ++i) {
      // 원래 백트래킹 기법으로 모든 방향에 대해서 들어가서 계산하고 나와야 했지만
      // 4진법으로 모든 방향을 반복문으로 확인하는 방법이다
      // tmp가 현재 들어온 총 cctv가 낼 수 있는 모든 경우의 수를 담고 있기 때문
      int dir = brute%4;
      brute /= 4;
      int x,y;
      tie(x,y) = cctv[i];
      if(br1[x][y]==1) {
        upd(x,y,dir);
      }
      else if(br1[x][y]==2) {
        upd(x,y,dir);
        upd(x,y,dir+2);
      }
      else if(br1[x][y]==3) {
        upd(x,y,dir);
        upd(x,y,dir+1);
      }
      else if(br1[x][y]==4) {
        upd(x,y,dir);
        upd(x,y,dir+1);
        upd(x,y,dir+2);
      }
      else {
        upd(x,y,dir);
        upd(x,y,dir+1);
        upd(x,y,dir+2);
        upd(x,y,dir+3);
      }
    }
    
    int val = 0;
    for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      val += (br2[i][j]==0);
    mn = min(mn, val);
  }
  cout<<mn;
  return 0;
}