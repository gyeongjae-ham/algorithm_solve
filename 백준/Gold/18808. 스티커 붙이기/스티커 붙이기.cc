#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

int n,m,k;
int r,c;
int br[42][42];
int paper[12][12];

// 스티커 붙일 수 있는지 확인하고 붙이기
bool solve(int x, int y) {
  for(int i=0;i<r;++i) {
    for(int j=0;j<c;++j) {
      if(br[x+i][y+j]==1 and paper[i][j]==1) {
        return false;
      }
    }
  }
  
  for(int i=0;i<r;++i){
    for(int j=0;j<c;++j) {
      if(paper[i][j]==1) {
        br[x+i][y+j] = 1;
      }
    }
  }
  return true;
}

// 스티커 종이 90도 회전 시키기
void rotate() {
  int tmp[12][12];
  for(int i=0;i<r;++i){
    for(int j=0;j<c;++j) {
      tmp[i][j] = paper[i][j];
    }
  }
  
  for(int i=0;i<c;++i){
    for(int j=0;j<r;++j){
      paper[i][j] = tmp[r-1-j][i];
    }
  }
  
  swap(r,c);
}

int main(void) {
  fastio;
  cin>>n>>m>>k;
  
  while(k--) {
    cin>>r>>c;
    // 스티커 모양 초기화하고
    for(int i=0;i<10;i++) fill(paper[i], paper[i]+10, 0);
    // 모양 입력받기
    for(int i=0;i<r;++i){
      for(int j=0;j<c;++j){
        cin>>paper[i][j];
      }
    }
    
    // 4방향 보면서 못 붙였으면 90도씩 회전시키기
    for(int rot=0;rot<4;++rot) {
      bool is_past = false;
      for(int x=0;x<=n-r;++x){
        if(is_past) break;
        for(int y=0;y<=m-c;++y){
          if(solve(x,y)) {
            is_past = true;
            break;
          }
        }
      }
      if(is_past) break;
      rotate();
    }
  }
    
  // 붙인 공간 개수 세기
  int cnt = 0;
  for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
      cnt += br[i][j];
    }
  }
  cout << cnt << '\n';
  return 0;
}
