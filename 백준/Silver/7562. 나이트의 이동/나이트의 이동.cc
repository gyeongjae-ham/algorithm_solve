#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int t,n,fx,fy;
int dx[8] = {2,1,-1,-2,-1,-2,1,2};
int dy[8] = {1,2,2,1,-2,-1,-2,-1};
int graph[301][301];
int vist[301][301];

bool BFS(int a, int b){
    queue<pair<int,int>> Q;
    Q.push({a,b});
    vist[a][b] = 1;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0;dir<8;dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx<0||ny<0||nx>=n||ny>=n) continue;
            if(graph[nx][ny]>0&&vist[nx][ny]==1) continue;
            graph[nx][ny] = graph[cur.X][cur.Y]+1;
            vist[nx][ny]=1;
            Q.push({nx,ny});
            if(nx==fx&&ny==fy) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        int x,y;
        cin>>x>>y>>fx>>fy;
        graph[x][y]=1;
        if(BFS(x,y)) cout<<graph[fx][fy]-1<<"\n";
        else cout<<0<<"\n";
        memset(graph, 0, sizeof(graph));
        memset(vist, 0, sizeof(vist));
    }
    
    return 0;
}