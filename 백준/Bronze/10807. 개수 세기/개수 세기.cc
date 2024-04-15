#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  int n, t;
  cin>>n;
  vector<int> v(200);
  
  for(int i=0;i<n;i++) {
    int tmp;
    cin>>tmp;
    v[tmp+100]++;
  }
  
  cin>>t;
  cout<<v[t+100];
  
  return 0;
}