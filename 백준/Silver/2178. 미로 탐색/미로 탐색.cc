#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int n,m;
string graph[102];
int dist[102][102];
int dx[4]={1, 0,-1,0};
int dy[4]={0, 1,0,-1};
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n>>m;
    // string 형태로 배열로 담아주고
    for(int i=0;i<n;i++){
        cin>>graph[i];
    }
    // dist 배열 -1로 초기화 해주기
    for(int i=0;i<n;i++) fill(dist[i], dist[i]+m, -1);
    
    queue<pair<int,int>> Q;
    Q.push({0,0});
    dist[0][0] = 0;
    // 시작점 큐에 넣고 시작점 0으로 초기화
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            // 범위 안벗어나고
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            // 이미 방문한 곳이나 갈수 없는 곳은 지나치고
            if(dist[nx][ny]>=0||graph[nx][ny]!='1') continue;
            // 이전 지점 값에서 + 해주기
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            Q.push({nx,ny});
        }
    }
    cout<<dist[n-1][m-1]+1<<"\n";
    return 0;
}