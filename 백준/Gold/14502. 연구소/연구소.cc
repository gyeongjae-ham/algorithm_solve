#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int n,m;
int arr[10][10];
int maxV;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

// 바이러스 퍼트리기
void bfs() {
    queue<pair<int, int>> q;
    int tmp[10][10];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            tmp[i][j] = arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == 2) {
                q.push({i,j});
            }
        }
    }
    
    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        int x, y;
        tie(x,y) = cur;
        
        for(int d=0; d<4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            
            if(nx<0 or nx>=n or ny<0 or ny>=m) continue;
            if(tmp[nx][ny] == 0) {
                tmp[nx][ny] = 2;
                q.push({nx, ny});
            }
        }
    }
    
    int cnt = 0;
    for(int i=0; i<n;i++) {
        for(int j=0;j<m;j++) {
            if(tmp[i][j] == 0) cnt++;
        }
    }
    
    maxV = max(maxV, cnt);
}

// 벽 3개 세우기 백트래킹
void buildWall(int cnt) {
    if(cnt == 3) {
        bfs();
        return;
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == 0) {
                arr[i][j] = 1;
                buildWall(cnt+1);
                arr[i][j] = 0;
            }
        }
    }
}

int main(void){
    fi;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    
    maxV = INT_MIN;
    buildWall(0);
    
    cout<<maxV;
    return 0;
}