#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  vector<int> v(10);
  int a,b,c;
  cin>>a>>b>>c;
  
  int res = a*b*c;
  string tmp = to_string(res);
  
  for (auto c : tmp) {
    v[c-48]++;
  }
  for(auto c : v) {
    cout<<c<<"\n";
  }
  return 0;
}