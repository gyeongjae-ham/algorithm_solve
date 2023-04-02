#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,m;
int arr[10];

void func(int k) {
  // m개의 수를 다 정했으면 출력
  if(k==m) {
    for(int i=0;i<m;i++) {
      cout<<arr[i]<<' ';
    }
    cout<<'\n';
    return;
  }

  for(int i=1;i<=n;i++) {
    arr[k] = i;
    func(k+1);
  }
}

int main(void) {
  fastio;
  cin>>n>>m;
  func(0);
  return 0;
}