#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

string board[4];

void go(int x, int dir) {
  int dirs[4] = {};
  dirs[x] = dir;
  // 왼쪽 톱니바퀴 있으면 회전 전파시키기
  // idx가 0보다 크면 왼쪽에 톱니바퀴가 있다는 뜻
  int idx = x;
  while(idx>0 && board[idx][6] != board[idx-1][2]) {
    // 서로 극이 다르면 현재 idx의 톱니바퀴와 반대므로 - 곱해주기
    dirs[idx-1] = -dirs[idx];
    --idx;
  }
  
  // 오른쪽 톱니바퀴가 있으면 회전 전파시키기
  // idx가 3보다 작으면 오른쪽에 톱니바퀴가 있다는 뜻
  idx = x;
  while(idx<3 && board[idx][2] != board[idx+1][6]) {
    // 서로 극이 다르면 현재 idx의 톱니바퀴와 반대므로 - 곱해주기
    dirs[idx+1] = -dirs[idx];
    ++idx;
  }
  
  // 돌리는 방향에 맞게 톱니바퀴들을 돌려주기
  for(int i=0;i<4;++i) {
    // 왼쪽으로 돌리기
    if(dirs[i]==-1) rotate(board[i].begin(), board[i].begin()+1, board[i].end());
    // 오른쪽으로 돌리기
    else if(dirs[i]==1) rotate(board[i].begin(), board[i].end()-1, board[i].end());
  }
}

int main(void) {
  fastio;
  // init
  for(int i=0;i<4;++i) cin>>board[i];
  int k;
  cin>>k;
  
  while(k--) {
    int x, dir;
    cin>>x>>dir;
    go(x-1, dir);
  }
  
  int ans = 0;
  for(int i=0;i<4;++i) {
    if(board[i][0] == '1') ans += (1<<i);
  }
  cout<<ans;
  return 0;
}