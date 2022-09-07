#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m;
string graph[1002];
int dist1[1002][1002];
int dist2[1002][1002];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        fill(dist1[i], dist1[i] + m, -1);
        fill(dist2[i], dist2[i] + m, -1);
    }

    for (int i = 0; i < n; i++) {
        cin >> graph[i];
    }

    queue<pair<int, int>> Q1;
    queue<pair<int, int>> Q2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == 'F') {
                Q1.push({i, j});
                dist1[i][j] = 0;
            }
            if (graph[i][j] == 'J') {
                Q2.push({i, j});
                dist2[i][j] = 0;
            }
        }
    }

    // 불이 퍼져나가는 bfs
    while (!Q1.empty()) {
        auto cur = Q1.front(); Q1.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0||ny<0||nx>=n||ny>=m) continue;
            if(dist1[nx][ny]>=0||graph[nx][ny]=='#') continue;
            dist1[nx][ny] = dist1[cur.X][cur.Y]+1;
            Q1.push({nx,ny});
        }
    }
    
    while(!Q2.empty()){
        auto cur = Q2.front(); Q2.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            // 범위를 벗어난거면 탈출에 성공한 거기 때문에 종료
            if(nx<0||ny<0||nx>=n||ny>=m){
                cout<<dist2[cur.X][cur.Y]+1<<"\n";
                return 0;
            }
            if(dist2[nx][ny]>=0||graph[nx][ny]=='#') continue;
            // 불이 퍼져있고 그 퍼진 속도가 지훈이랑 동시거나 더 빠를 땐 갈수 없으니 패스
            if(dist1[nx][ny]!=-1&&dist1[nx][ny]<=dist2[cur.X][cur.Y]+1) continue;
            dist2[nx][ny] = dist2[cur.X][cur.Y]+1;
            Q2.push({nx,ny});
        }
    }
    
    // 두 while을 빠져나온건 탈출 실패므로
    cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}