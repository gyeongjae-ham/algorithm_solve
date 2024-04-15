#include <bits/stdc++.h>

#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

using namespace std;

int main() {
  fi;
  int n, t;
  cin>>n;
  vector<int> v;
  
  for(int i=0;i<n;i++) {
    int tmp;
    cin>>tmp;
    v.push_back(tmp);
  }
  
  sort(v.begin(), v.end());
  
  int start=0;
  int end=n-1;
  
  cin>>t;
  int res = 0;
  while(start < end) {
    if(v[start] + v[end] == t) {
      res++;
      end--;
    }
    else if(v[start] + v[end] > t) {
      end--;
    }
    else {
      start++;
    }
  }
  
  cout<<res;
  
  return 0;
}