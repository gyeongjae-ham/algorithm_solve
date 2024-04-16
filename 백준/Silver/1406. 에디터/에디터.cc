#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  string str;
  cin>>str;
  
  list<char> L;
  
  for(int i=0;i<str.size();i++) {
    L.push_back(str.at(i));
  }
  
  int N;
  cin>>N;
  list<char>::iterator cur = L.end();
  
  for(int i=0;i<N;i++) {
    char c;
    cin>>c;
    
    if(c=='L') {
      if(cur!=L.begin()) cur--;
    }
    else if(c=='D') {
      if(cur!=L.end()) cur++;
    }
    else if(c=='B') {
      if(cur!=L.begin())
        cur = L.erase(--cur);
    }
    else if(c=='P') {
      char s;
      cin>>s;
      L.insert(cur, s);
    }
  }
  
  for(auto it=L.begin();it!=L.end();it++) {
    cout<<*it;
  }
  
  return 0;
}