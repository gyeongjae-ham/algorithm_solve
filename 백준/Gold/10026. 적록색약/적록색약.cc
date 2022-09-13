#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string graph[102];
string s;
int n;
int vist[102][102];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void BFS(int a, int b){
    queue<pair<int,int>> Q;
    Q.push({a,b});
    vist[a][b]=1;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir=0;dir<4;dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            
            if(nx<0||nx>=n||ny<0||ny>=n) continue;
            if(!vist[nx][ny]&&(graph[nx][ny]==graph[cur.X][cur.Y])){
                vist[nx][ny]=1;
                Q.push({nx,ny});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        graph[i]=s;
    }
    
    int res1 = 0;
    int res2 = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!vist[i][j]){
                BFS(i,j);
                res1++;
            }
        }
    }
    memset(vist, 0, sizeof(vist));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]=='G') graph[i][j]='R';
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!vist[i][j]){
                BFS(i,j);
                res2++;
            }
        }
    }
    
    cout<<res1<<" "<<res2<<"\n";
    return 0;
}