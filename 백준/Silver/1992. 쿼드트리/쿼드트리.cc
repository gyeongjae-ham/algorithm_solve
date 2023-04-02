#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n;
const int MX = 64;
int arr[MX][MX];

void solve(int n, int x, int y) {
  if(n==1) {
    cout<<arr[x][y];
    return;
  }
  
  bool zero=true, one = true;
  for(int i=x; i<x+n ;i++) {
    for(int j=y; j<y+n; j++) {
      if(arr[i][j]) zero = false;
      else one = false;
    }
  }
  
  if(zero) cout<<0;
  else if(one) cout<<1;
  else {
    cout<<'(';
    solve(n/2, x, y); // 왼쪽 위
    solve(n/2, x, y+n/2); // 오른쪽 위
    solve(n/2, x+n/2, y); // 왼쪽 아래
    solve(n/2, x+n/2, y+n/2); // 오른쪽 아래
    cout<<')';
  }
  return;
}

int main(void) {
  fastio;
  cin>>n;
  for(int i=0;i<n;i++) {
    string s;
    cin>>s;
    for(int j=0;j<n;j++) {
      arr[i][j] = s[j] - '0';
    }
  }
  solve(n, 0, 0);
  return 0;
}