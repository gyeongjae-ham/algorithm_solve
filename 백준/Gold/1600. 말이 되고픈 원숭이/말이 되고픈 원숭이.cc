#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int br[202][202];
int vs[32][202][202];
int dx4[] = { 0, 0, 1, -1 };
int dy4[] = { 1, -1, 0, 0 };
int dx8[] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy8[] = { 1, -1, 2, -2, 2, -2, 1, -1 };
queue<tuple<int, int, int>> q;
int bX, bY, Kn;

int main(void) {
  fastio;
  cin >> Kn >> bY >> bX;
  for (int i = 0; i < bX; i++)
  for (int j = 0; j < bY; j++)
      cin >> br[i][j];
  
  q.push({ 0, 0, 0 });
  vs[0][0][0] = 1;
  while (!q.empty()) {
    int vk, vx, vy;
    tie(vk, vx, vy) = q.front(); q.pop();
    if (vk < Kn) {
      for (int i = 0; i < 8; i++) {
        int nx = vx + dx8[i]; 
        int ny = vy + dy8[i];
        
        if (nx < 0 || ny < 0 || bX <= nx || bY <= ny) continue;
        if (br[nx][ny]) continue;
        if (vs[vk + 1][nx][ny]) continue;
        vs[vk + 1][nx][ny] = vs[vk][vx][vy] + 1;
        q.push({ vk + 1, nx, ny });
      }
    }
    for (int i = 0; i < 4; i++) {
      int nx = vx + dx4[i];
      int ny = vy + dy4[i];
      if (nx < 0 || ny < 0 || bX <= nx || bY <= ny) continue;
      if (br[nx][ny]) continue;
      if (vs[vk][nx][ny]) continue;
      vs[vk][nx][ny] = vs[vk][vx][vy] + 1;
      q.push({ vk, nx, ny });
    }
  }
  int ans = 0x7f7f7f7f; // int 최댓값
  for (int i = 0; i < Kn + 1; i++)
    if(vs[i][bX - 1][bY - 1]) ans = min(ans, vs[i][bX - 1][bY - 1]);
  if (ans != 0x7f7f7f7f) cout << ans - 1;
  else cout << -1;
  return 0;
}