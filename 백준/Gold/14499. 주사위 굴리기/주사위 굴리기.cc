#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

int N,M,x,y,K,cmd;
int br[21][21];
int dice[7];
//  윗면이 2이고, 동쪽을 바라보는 방향이 6
//     [1]
//  [5][2][6]
//     [3]
//     [4]

int idx[5][4] = {
  {},
  {2,6,4,5}, // 동쪽
  {2,5,4,6}, // 서쪽
  {3,2,1,4}, // 북쪽
  {2,3,4,1}, // 남쪽
};

bool isOk(int nx, int ny) {
  if(nx<0 or ny<0 or nx>=N or ny>=M) return false;
  return true;
}

void roll(int cmd) {
  // 회전 할 때 기존 주사위 위치 값을 보존하기 위해서 임시 배열 생성
  int tmp[7];
  for(int i=1;i<=6;++i) tmp[i] = dice[i];
  
  // 굴리는 명령 처리
  for(int i=0;i<4;++i) {
    // 굴린 거니까 현재 인덱스 다음 인덱스의 값을 넣어주고 그럼 범위를 넘어가니까 4로 나눠준다
    tmp[idx[cmd][i]] = dice[idx[cmd][(i+1)%4]];
  }
  // 굴린 결과값을 주사위에 넣어주기
  for(int i=1;i<=6;++i) dice[i] = tmp[i];
}

void score(int c) {
  int nx=x, ny=y;
  // 주사위 위치 이동
  if(c==1) ++ny;
  else if(c==2) --ny;
  else if(c==3) --nx;
  else ++nx;
  
  if(isOk(nx,ny)) {
    x=nx, y=ny; // 범위 확인 후에 주사위 위치 대입
    roll(c); // 명령대로 굴려주고 
    // 보드판 값 확인
    // 0일 경우
    if(br[nx][ny]==0) br[nx][ny] = dice[4]; // 칸에 바닥면 수를 입력
    
    // 0이 아닐 경우
    else {
      dice[4] = br[nx][ny]; // 주사위 바닥면에 보드 칸 값 대입
      br[nx][ny] = 0; // 보드 값 0으로 초기화
    }
    
    cout<<dice[2]<<endl; // 주사위 윗면 출력
  }
}

int main(void) {
  fastio;
  cin>>N>>M>>x>>y>>K;
  for(int i=0;i<N;++i)
  for(int j=0;j<M;++j)
    cin>>br[i][j];
  
  while(K--) {
    cin>>cmd;
    score(cmd);
  }
}