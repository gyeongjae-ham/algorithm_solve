#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second
int graph[502][502];
bool vis[502][502];
int n, m;
int dx[4] = {1, 0,-1,0};
int dy[4] = {0, 1,0,-1};
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n>>m;
    // 행, 열에 맞춰서 그래프 받아주기
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>graph[i][j];
        }
    }
    
    int mx = 0; // 그림 최대 크기
    int num = 0; // 그림의 개수
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // 빨간 부분이거나 방문한 적 있으면 continue
            if(graph[i][j] == 0 || vis[i][j]) continue;
            // 아니라면 그림이니까 개수 늘려주고 queue 시작점 추가
            num++;
            queue<pair<int,int> > Q;
            vis[i][j] = 1;
            Q.push({i,j});
            int area = 0;
            while(!Q.empty()){
                area++;
                pair<int,int> cur = Q.front(); Q.pop();
                for(int dir=0;dir<4;dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    // 범위 벗어나는지 체크
                    if(nx<0||nx>=n||ny<0||ny>=m) continue;
                    if(vis[nx][ny] || graph[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout<<num<<"\n"<<mx;
    return 0;
}