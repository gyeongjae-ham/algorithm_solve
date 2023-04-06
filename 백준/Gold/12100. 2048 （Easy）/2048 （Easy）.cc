#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

int n;
int br1[22][22];
int br2[22][22];

void rotate() {
  int tmp[22][22];
  // copy br2
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      tmp[i][j] = br2[i][j];
    }
  }
  
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      br2[i][j] = tmp[n-1-j][i];
    }
  }
}

void tilt(int dir) {
  while(dir--) rotate();
  for(int i=0;i<n;i++) {
    int tilted[22] = {};
    int idx = 0;
    for(int j=0;j<n;++j){
      if(br2[i][j]==0) continue;
      if(tilted[idx]==0) {
        tilted[idx] = br2[i][j];
      }
      else if(tilted[idx] == br2[i][j]) {
        tilted[idx++] *= 2;
      }
      else {
        tilted[++idx] = br2[i][j];
      }
    }
    
    for(int j=0;j<n;++j) br2[i][j] = tilted[j];
  }
}

int main(void) {
  fastio;
  cin>>n;
  //init board
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cin>>br1[i][j];
    }
  }
  
  int mx = 0;
  for(int tmp=0; tmp<1024; ++tmp) {
    // copy br1 to br2
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j) {
        br2[i][j] = br1[i][j];
      }
    }
    
    int brute = tmp;
    for(int i=0;i<5;++i) {
      int dir = brute%4;
      brute /= 4;
      tilt(dir);
    }
    
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j){
        mx = max(mx, br2[i][j]);
      }
    }
  }
  cout<<mx;
  return 0;
}