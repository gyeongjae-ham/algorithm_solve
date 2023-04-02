#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

char br[2300][2300];
int n;

void solve(int n, int x, int y) {
  if(n==1) {
    br[x][y] = '*';
    return;
  }
  
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      if(i==1 && j==1) continue;
      solve(n/3, x+n/3*i, y+n/3*j);
    }
  }
}

int main(void) {
  fastio;
  cin>>n;
  for(int i=0;i<n;i++) fill(br[i], br[i]+n, ' ');
  
  solve(n, 0, 0);
  for(int i=0;i<n;i++) cout<<br[i]<<'\n';
  return 0;
}