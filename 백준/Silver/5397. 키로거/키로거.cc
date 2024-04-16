#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  int N;
  cin>>N;
  
  while(N--) {
    list<char> l = {};
    auto p = l.begin();
    string s;
    cin>>s;
    for(auto c:s) {
      if(c=='<') {
        if(p!=l.begin()) p--;
      }
      else if(c=='>') {
        if(p!=l.end()) p++;
      }
      else if(c=='-') {
        if(p!=l.begin()) {
          p = l.erase(--p);
        }
      }
      else {
        l.insert(p, c);
      }
    }
    
    for(auto c:l) cout<<c;
    cout<<'\n';
  }
  
  return 0;
}