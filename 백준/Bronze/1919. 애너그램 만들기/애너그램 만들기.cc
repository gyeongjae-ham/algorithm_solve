#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  string a,b;
  cin>>a>>b;
  vector<int> v1(26);
  vector<int> v2(26);
  fill(v1.begin(), v1.end(), 0);
  fill(v2.begin(), v2.end(), 0);
    
  for(auto c:a){
    v1[int(c)-97]++;
  }
  for(auto c:b){
    v2[int(c)-97]++;
  }
  
  int res = 0;
  for(int i=0;i<v1.size();i++) {
    res += abs(v1[i]-v2[i]);
  }
  cout<<res;
  return 0;
}