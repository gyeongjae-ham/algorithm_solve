#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,m;
vector<int> a;

int main(void) {
  fastio;
  cin>>n>>m;
  for(int i=0;i<n;i++) a.push_back(i < m ? 0 : 1);
  do {
    for(int i=0;i<n;i++) {
      if(a[i]==0) cout<< i+1 << ' ';
    }
    cout<<'\n';
  } while (next_permutation(a.begin(), a.end()));
  return 0;
}