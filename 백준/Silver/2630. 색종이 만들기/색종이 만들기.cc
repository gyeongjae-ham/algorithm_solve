#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n;
int paper[130][130];
int cnt[2];

bool chk(int x, int y, int n) {
  for(int i=x;i<x+n;i++) {
    for(int j=y;j<y+n;j++) {
      if(paper[x][y]!=paper[i][j]) return false;
    }
  }
  return true;
}

void solution(int x, int y, int z) {
  if(chk(x,y,z)) {
    cnt[paper[x][y]]++;
    return;
  }
  int n = z/2;
  for(int i=0;i<2;i++) {
    for(int j=0;j<2;j++) {
      solution(x+i*n, y+j*n, n);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      cin>>paper[i][j];
    }
  }
  
  solution(0,0,n);
  for(int i=0;i<2;i++) cout<<cnt[i]<<'\n';
  return 0;
}