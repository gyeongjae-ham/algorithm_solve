#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n,m;
int board[502][502];
bool vis[502][502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n>>m;
    
    // push board info
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>board[i][j];
        }
    }
    
    int mx = 0; // paint's max area
    int num = 0; // count paint
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(board[i][j]==0||vis[i][j]) continue;
            num++;
            queue<pair<int, int>> Q;
            // change vis's value to visit
            vis[i][j] = 1;
            Q.push({i, j});
            int area = 0;
            
            while (!Q.empty()) {
                area++;
                // input cur's value
                pair<int, int> cur = Q.front(); Q.pop();
                // check 4 direction can visit
                for(int dir=0;dir<4;dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    
                    // Skip if out of range
                    if (nx<0||nx>=n||ny<0||ny>=m) continue;
                    // Skip if already visit or can't visit
                    if (vis[nx][ny]||board[nx][ny]!=1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    
    cout << num << '\n' << mx;
    return 0;
}