#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
    
  int n;
  cin>>n;
  for(int i=1;i<=n;i++) {
    for(int j=0;j<i-1;j++) cout<<" ";
    for(int k=n-i+1;k>0;k--) cout<<"*";
    cout<<"\n";
  } 
  
  return 0;
}