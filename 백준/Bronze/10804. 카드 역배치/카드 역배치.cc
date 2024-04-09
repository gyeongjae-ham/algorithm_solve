#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
    
  vector<int> v(21);
  int st, en;
  
  for (int i=0; i<21; i++) {
    v[i] = i;
  }
  
  for (int i=0; i<10; i++) {  
    cin>>st>>en;
    reverse(v.begin()+st, v.begin()+en+1);
  }
  
  for (int i=1; i<21; i++) {
    cout<<v[i]<<' ';
  }
  
  return 0;
}