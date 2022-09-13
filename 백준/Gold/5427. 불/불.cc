#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int tc, x, y;
int graph[1002][1002];
int visF[1002][1002];
int visS[1002][1002];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>tc;
    for(int testno=0;testno<tc;testno++){
        bool res = false;
        queue<pair<int,int>> Qf={}, Qs={};
        cin>>y>>x;
        
        // 불이랑 상근이 방문 기록을 0으로 초기화
        for(int j=0;j<x;j++){
            fill(visF[j], visF[j]+y, 0);
            fill(visS[j], visS[j]+y, 0);
        }
        
        // 벽이면 graph에 -1 기록해주고 아니면 각각 bfs 돌려주기
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                char c;
                cin>>c;
                // 벽이면 -1 처리
                if(c=='#') graph[i][j]=-1;
                else{
                    // 상근이면 Qs에 담고 방문처리
                    if(c=='@'){
                        Qs.push({i,j});
                        visS[i][j]=1;
                    }
                    // 불이면 Qf에 담고 방문처리
                    else if(c=='*'){
                        Qf.push({i,j});
                        visF[i][j]=1;
                    }
                    graph[i][j]=0;
                }
            }
        }
        
        // 불 bfs
        while(!Qf.empty()){
            auto cur = Qf.front(); Qf.pop();
            for(int dir=0;dir<4;dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                
                if(nx<0||ny<0||x<=nx||y<=ny) continue;
                if (graph[nx][ny] == -1) continue;
                if(visF[nx][ny]) continue;
                visF[nx][ny] = visF[cur.X][cur.Y]+1;
                Qf.push({nx,ny});
            }
        }
        
        // 상근 bfs
        while ((!Qs.empty()) && (!res)) {
            auto v = Qs.front();
            Qs.pop();
            for (int k = 0; k < 4; k++) {
                int nx = v.X + dx[k];
                int ny = v.Y + dy[k];
                if (nx < 0 || x <= nx || ny < 0 || y <= ny) {
                    cout << visS[v.X][v.Y] << '\n';
                    res = true;
                    break;
                }
                if (graph[nx][ny] == -1) continue;
                if (visS[nx][ny]) continue;
                if (visF[nx][ny] != 0 && visF[nx][ny] <= visS[v.X][v.Y] + 1) continue;
                visS[nx][ny] = visS[v.X][v.Y] + 1;
                Qs.push({nx, ny});
            }
        }
        
        // while 다 돌았는데 못 나온거면 탈출 실패
        if (!res) cout << "IMPOSSIBLE" << '\n';
    }
}