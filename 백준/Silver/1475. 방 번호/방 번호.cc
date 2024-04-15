#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  string a;
  cin>>a;
  vector<int> v(10);
  
  fill(v.begin(), v.end(), 0);
  
  for(auto c:a) {
    if (int(c-'0') == 9 || int(c-'0') == 6) {
      if (v[9] > v[6]) v[6]++;
      else v[9]++;
    }
    else {
      v[int(c-'0')]++; 
    }
  }
  
  cout<<*max_element(v.begin(), v.end());
  
  return 0;
}