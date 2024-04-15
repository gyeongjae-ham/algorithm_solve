#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  int n;
  cin>>n;
  for(int i=0;i<n;i++) {
    string a,b;
    cin>>a>>b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if(a==b) cout<<"Possible"<<"\n";
    else cout<<"Impossible"<<"\n";
  }
  
  return 0;
}