#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n;
int s[10], w[10];
int mx = 0, cnt = 0;

void solve(int k) {
  // 계란 수 만큼 시도했으면 mx 값 구하고 return
  if(k==n) {
    mx = max(mx, cnt);
    return;
  }
  
  // 이번에 시도할 계란이 이미 깨져있거나 이게 마지막 계란이면 넘어가고 return
  if(s[k]<=0 or cnt==n-1) {
    solve(k+1);
    return;
  }
  
  for(int i=0;i<n;i++) {
    // 다음으로 깰 계란이 현재 계란의 인덱스이거나 이미 깨져있다면 스킵
    if(i==k or s[i]<=0) continue;
    // 각 계란의 무게만큼 내구도 깎아주고
    s[k] -= w[i];
    s[i] -= w[k];
    // 깨졌으면 cnt 추가
    if(s[k]<=0) cnt++;
    if(s[i]<=0) cnt++;
    // 다음 계란으로 가주고
    solve(k+1);
    // 갔다 왔으면 다음 경우의 수를 구하기 위해서 원복
    if(s[k]<=0) cnt--;
    if(s[i]<=0) cnt--;
    s[k] += w[i];
    s[i] += w[k];
  }
}

int main(void) {
  fastio;
  cin>>n;
  // init
  for(int i=0;i<n;i++) cin>>s[i]>>w[i];
  solve(0);
  cout<<mx;
  return 0;
}