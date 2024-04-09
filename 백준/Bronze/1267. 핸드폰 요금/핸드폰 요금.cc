#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
    
  int n, y=0, m=0;
  cin>>n;
    
  for (int i=0; i<n; i++) {
    int t;
    cin>>t;
    
    y += ((t / 30) + 1) * 10;
    m += ((t / 60) + 1) * 15;
  }
  
  if (y == m) cout << "Y M " << y;
  else if (y < m) cout << "Y " << y;
  else cout << "M " << m;
  
  return 0;
}