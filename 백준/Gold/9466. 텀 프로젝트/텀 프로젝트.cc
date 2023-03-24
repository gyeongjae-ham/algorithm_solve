#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,t;
int arr[100005];
int state[100005];
const int NOT_VISITED = 0;
const int CYCLE_IN = -1;

void run(int x) {
  int cur = x;
  while(true) {
    // Put input node value into the visiting nodes status value
    state[cur] = x;
    // Update cur value
    cur = arr[cur];
    // if state[cur]==x,
    // this means that find cycle because you met a student who passed by on this visit
    if(state[cur]==x) {
      // change the values of nodes in the cycle so that the cycle can be checked
      while(state[cur] != CYCLE_IN) {
        state[cur] = CYCLE_IN;
        cur = arr[cur];
      }
      return ;
    }
    // Find cycle or student who passed by on before visit
    else if(state[cur]!=0) return;
  }
}

int main(void) {
  fastio;
  cin>>t;
  while(t--) {
    cin>>n;
    // init arr
    for(int i=1;i<=n;i++) cin>>arr[i];
    // init state
    fill(state+1, state+n+1, 0);
    for(int i=1;i<=n;i++) {
      if(state[i]==NOT_VISITED) run(i);
    }
    
    int cnt = 0;
    for(int i=1;i<=n;i++) {
      if(state[i]!=CYCLE_IN) cnt++;
    }
    cout<<cnt<<'\n';
  }
  return 0;
}