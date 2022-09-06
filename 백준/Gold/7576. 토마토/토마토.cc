#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int n,m;
int graph[1002][1002];
int dist[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    // 세로부터 입력 들어오니까 n,m 바꿔서 받아주기
    cin>>m>>n;
    queue<pair<int,int>> Q;
    // 그래프 만들어주기
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>graph[i][j];
            if(graph[i][j]==1) Q.push({i,j});
            if(graph[i][j]==0) dist[i][j] = -1;
        }
    }
    
    // 큐가 빌때까지 반복
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0;dir<4;dir++){
            // 갈수 있는 방향으로 가면서 확인
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(dist[nx][ny]>=0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            Q.push({nx,ny});
        }
    }
    
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dist[i][j]==-1){
                cout<<-1<<"\n";
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout<<ans<<"\n";
    return 0;
}