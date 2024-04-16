#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  int n,k;
  cin>>n>>k;
  
  queue<int> Q;
  for(int i=1;i<n+1;i++) Q.push(i);
  
  cout<<'<';
  while(!Q.empty()) {
    for(int i=1;i<k;i++) {
      Q.push(Q.front());
      Q.pop();
    }
    cout<<Q.front();
    Q.pop();
    cout<<(Q.empty() ? ">" : ", ");
  }
  
  return 0;
}