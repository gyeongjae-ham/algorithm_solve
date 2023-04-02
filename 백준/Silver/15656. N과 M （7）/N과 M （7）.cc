#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,m;
int arr[10];
int num[10];

void func(int k) {
  if(k==m) {
    for(int i=0;i<m;i++) {
      cout<<num[arr[i]]<<' ';
    }
    cout<<'\n';
    return;
  }
  
  for(int i=0;i<n;i++) {
    arr[k] = i;
    func(k+1);
  }
}

int main(void) {
  fastio;
  cin>>n>>m;
  for(int i=0;i<n;i++) cin>>num[i];
  sort(num, num+n);
  func(0);
  return 0;
}