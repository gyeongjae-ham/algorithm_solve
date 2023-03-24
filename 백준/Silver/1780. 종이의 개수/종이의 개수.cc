#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n;
int paper[2200][2200];
int cnt[3];

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
    cnt[paper[x][y]+1]++;
    return;
  }
  int n = z/3;
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
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
  for(int i=0;i<3;i++) cout<<cnt[i]<<'\n';
  return 0;
}