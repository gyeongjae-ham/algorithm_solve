#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int graph[52][52];
int n,m,k;

void BFS(int a, int b){
    queue<pair<int,int>> Q;
    int dx[4] = {0,0,-1,1};
    int dy[4] = {-1,1,0,0};
    
    Q.push({a,b});
    graph[a][b] = 0;
    
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(graph[nx][ny]==1){
                Q.push({nx,ny});
                graph[nx][ny]=0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>m>>n>>k;
        
        // 배추 위치 기록
        for(int j=0;j<k;j++){
            int x,y;
            cin>>x>>y;
            graph[y][x]=1;
        }
        
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(graph[i][j]==1){
                    BFS(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}