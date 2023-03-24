#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int k;

void rec(int a, int b, int n) {
  // base condition
  if(n==1) {
    cout<<a<<' '<<b<<'\n';
    return;
  }
  // n-1개를 최종 목적지가 아닌 기둥으로 이동
  rec(a, 6-a-b, n-1);
  // n번째 원판을 최종 목적지로 이동
  cout<<a<<' '<<b<<'\n';
  // n-1개 원판을 최종 목적지로 이동
  rec(6-a-b, b, n-1);
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin>>k;
  // 일반식이 2의 k승 -1(비트 연산자로 표현) == pow(2,k)
  cout<<(1<<k)-1<<'\n';
  rec(1,3,k);
    
  return 0;
}