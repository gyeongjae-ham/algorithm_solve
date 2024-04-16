#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  int n,k;
  cin>>n>>k;
  
  list<int> l;
  for(int i=1;i<n+1;i++) l.push_back(i);
  
  cout<<'<';
  auto p = l.begin();
  int i = 1;
  while(!l.empty()) {
    if(i%k == 0) {
      cout<<*p;
      p = l.erase(p);
      cout<<(l.empty() ? ">" : ", ");
    } else p++;
    if(p == l.end()) p = l.begin();
    i++;
  }
  
  return 0;
}