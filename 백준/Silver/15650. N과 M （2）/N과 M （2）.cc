#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,m;
int arr[10];
bool isused[10];

void func(int k) {
  // m개의 수를 다 정했으면 출력
  if(k==m) {
    for(int i=0;i<m;i++) {
      cout<<arr[i]<<' ';
    }
    cout<<'\n';
    return;
  }
  
  // k==0 일 경우 1부터
  int st = 1;
  // k!=0 일 경우 정해진 숫자보다 큰 수부터 시작
  if(k!=0) st = arr[k-1] + 1;
  for(int i=st;i<=n;i++) {
    if(!isused[i]) {
      arr[k] = i;
      isused[i] = 1;
      func(k+1);
      isused[i] = 0;
    }
  }
}

int main(void) {
  fastio;
  cin>>n>>m;
  func(0);
  return 0;
}