#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second
#define endl "\n"

int n,m;
int br[52][52];
vector<pair<int,int>> house;
vector<pair<int,int>> chk;

int main(void) {
  fastio;
  cin>>n>>m;
  // init board and save house and chicken info
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cin>>br[i][j];
      
      if(br[i][j]==1) house.push_back({i,j});
      if(br[i][j]==2) chk.push_back({i,j});
    }
  }
  
  vector<int> brute(chk.size(), 1);
  // 조합을 찾기 위해서 배열 설정하는 부분 ex) {0,0,0,1,1};
  fill(brute.begin(), brute.end()-m, 0);
  int mn = 0x7f7f7f7f;
  do {
    int dist = 0;
    for(auto h : house) {
      int tmp = 0x7f7f7f7f;
      for(int i=0;i<chk.size();++i){
        if(brute[i]==0) continue;
        tmp = min(tmp, abs(chk[i].X - h.X) + abs(chk[i].Y - h.Y));
      }
      dist += tmp;
    }
    mn = min(mn, dist);
  } while(next_permutation(brute.begin(), brute.end()));
  cout<<mn;
  return 0;
}