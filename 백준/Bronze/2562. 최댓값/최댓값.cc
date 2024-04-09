#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
    
  vector<int> v(9);
  for(int i=0;i<9;i++) cin>>v[i];
  
  cout<<*max_element(v.begin(), v.end())<<"\n";
  cout<<max_element(v.begin(), v.end())-v.begin()+1;
  
  return 0;
}