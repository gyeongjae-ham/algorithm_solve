#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

int n,w,L,ans;
int bridge[101];
queue<int> truck;

// 다리 위가 비었는지 확인
bool isEmpty() {
  for(int i=0;i<w;++i) {
    if(bridge[i]) return false;
  }
  return true;
}

// 트럭들을 한칸씩 전진시키기
void go() {
  for(int i=w-1; i>0; --i) {
    bridge[i] = bridge[i-1];
  }
  bridge[0] = 0;
}

// 다리위 트럭 무게의 합을 계산
int cal() {
  int sum=0;
  for(int i=0;i<w;++i) {
    sum += bridge[i];
  }
  return sum;
}

int main(void) {
  fastio;
  cin>>n>>w>>L;
  
  while(n--) {
    int i;
    cin>>i;
    truck.push(i);
  }
  
  do {
    int tmp = cal();
    // 다리 위 무게가 제한 무게보다 작다면
    if(tmp <= L) {
      // 다리 끝자락에 있는 나갈 트럭의 무게를 빼주고
      tmp -= bridge[w-1];
      // 트럭들을 한칸씩 전진시켜준다
      go();
      // 추가로 이동할 트럭이 남아있고 제한 무게보다 낮으면 다리위에 올린다
      if(!truck.empty() && tmp + truck.front() <= L) {
        bridge[0] = truck.front(); truck.pop();
      }
    }
    // 시간 올려주기
    ++ans;
  } while(!isEmpty()); // 다리위가 빌때까지 반복
  cout<<ans;
  return 0;
}