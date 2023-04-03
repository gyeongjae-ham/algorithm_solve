#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

bool mask[25];
string br[5];
int ans;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(void) {
  fastio;
  // init
  for(int i=0;i<5;i++) cin>>br[i];
  // 25명 중에서 7명 뽑는 거니까 그 외는 다 1로 만들어준다
  fill(mask+7, mask+25, 1);
  
  do {
    queue<pair<int,int>> q;
    int dsm = 0, adj = 0;
    bool isp[5][5] = {}, vs[5][5] = {};
    for(int i=0;i<25;i++) {
      if(!mask[i]) {
        // 몇 행 몇 열인지 변환
        int x = i/5, y=i%5;
        // 선택된 7명을 체크해주고
        isp[x][y] = 1;
        if(q.empty()) {
          q.push({x,y});
          // 방문 처리
          vs[x][y] = 1;
        }
      }
    }
    
    while(!q.empty()) {
      int x,y;
      tie(x,y) = q.front(); q.pop();
      // 칠공주 숫자 늘려주고
      adj++;
      // 다솜이파인지 확인해서 늘려주고
      dsm += (br[x][y] == 'S');
      for(int i=0;i<4;i++) {
        int nx = x+dx[i], ny = y+dy[i];
        // 범위 확인
        if(nx<0 or ny<0 or nx>=5 or ny>=5 or vs[nx][ny] or !isp[nx][ny]) continue;
        q.push({nx,ny});
        vs[nx][ny]=1;
      }
    }
    // 이 조합을 돌았을 때 조건에 해당하면 ans value 추가해주기
    ans += (adj == 7 and dsm >= 4);
  } while (next_permutation(mask, mask+25));
  cout<<ans;
  return 0;
}