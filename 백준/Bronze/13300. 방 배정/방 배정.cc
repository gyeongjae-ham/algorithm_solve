#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  int n, k;
  cin>>n>>k;
  vector<int> vm(6);
  vector<int> vw(6);
  
  fill(vm.begin(), vm.end(), 0);
  fill(vw.begin(), vw.end(), 0);
  
  for(int i=0;i<n;i++) {
    int s, y;
    cin>>s>>y;
    if(s==0) {
      vm[y-1]++;
    }    
    else {
      vw[y-1]++;
    }
  }
  
  int res = 0;
  for(auto c:vm) {
    if(c%k==0) res+=c/k;
    else res+=c/k+1;
  }
  for(auto c:vw) {
    if(c%k==0) res+=c/k;
    else res+=c/k+1;
  }
  
  cout<<res;
  
  return 0;
}