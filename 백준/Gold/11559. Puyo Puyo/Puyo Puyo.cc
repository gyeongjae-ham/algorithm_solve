#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

bool isPuyo; // 뿌요가 터졌는지
bool vs[12][6]; // 방문
string br[12];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int ans;

void resetVS() {
  for(int i=0;i<12;++i){
    for(int j=0;j<6;++j){
      vs[i][j] = 0;
    }
  }
}

void bfs(int x, int y) {
  bool doErase = false;
  vs[x][y] = 1;
  char color = br[x][y];
  queue<pair<int,int>> q;
  vector<pair<int,int>> tmp; // 같은 색깔이 4개 이상인지 확인하는 vector
  
  q.push({x,y});
  tmp.push_back({x,y});
  
  while(!q.empty()) {
    auto cur = q.front(); q.pop();
    for(int i=0;i<4;++i) {
      int nx = cur.X + dx[i];
      int ny = cur.Y + dy[i];
      
      if(nx<0 or ny <0 or nx>=12 or ny >=6) continue;
      // 빈 칸이거나 다른 색이면 무시
      if(vs[nx][ny] or br[nx][ny]=='.' or br[nx][ny] != color) continue;
      vs[nx][ny] = 1;
      q.push({nx,ny});
      tmp.push_back({nx,ny});
    }
  }
  
  // 4개 이상 연결된 색깔은 삭제시키기
  if(tmp.size() >= 4) {
    isPuyo = true;
    for(auto v:tmp) {
      br[v.X][v.Y] = '.';
    }
  }
}

int main(void) {
  fastio;
  for(int i=0;i<12;++i) {
    cin>>br[i];
  }
  
  do {
    isPuyo = false; // 같은 색이 터졌는지 확인
    // 뿌요들을 바닥으로 모두 내리기
    for(int i=0;i<6;++i) {
      // idx 11까지니까 10부터 비교해서 빈칸을 끌어올려 준다
      for(int j=10;j>=0;--j) {
        int tmp = j;
        // 빈 칸일 경우 자리를 바꿔준다
        // 열은 고정하고 x 좌표가 아래 인 값을 확인해서 빈칸이면 swap
        while(tmp<11 and br[tmp+1][i] == '.') {
          swap(br[tmp][i], br[tmp+1][i]);
          ++tmp;
        }
      }
    }
    
    // 터져야 하는 뿌요 처리
    for(int i=0;i<12;++i){
      for(int j=0;j<6;++j) {
        // 방문 안했고, 빈칸 아니면
        if(!vs[i][j] and br[i][j]!='.')
          bfs(i,j);
      }
    }
    
    if(isPuyo) ++ans; // 터졌으면 추가
    resetVS(); // 방문 초기화
  } while(isPuyo); // 안 터질때까지 반복
  
  cout<<ans;
  return 0;
}