#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  string s;
  cin>>s;
  
  vector<int> v(26);
  
  for (auto c : s) {
    v[int(c)-97]++;
  }
  
  for (auto c : v) {
    cout<<c<<" ";
  }
  
  return 0;
}