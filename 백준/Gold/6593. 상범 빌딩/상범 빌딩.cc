#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int l,r,c;
int dx[] = {1,-1,0,0,0,0};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {0,0,0,0,1,-1};
const int mx = 31;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    
    while(true) {
        cin>>l>>r>>c;
        if(l==0&&r==0&&c==0) break;
        queue<tuple<int,int,int>> q;
        char br[mx][mx][mx];
        int di[mx][mx][mx];
        bool isEscape = false;
        
        // init board
        for(int i=0;i<l;i++){
            for(int j=0;j<r;j++){
                fill(di[i][j], di[i][j]+c, 0);
            }
        }
        
        for(int i=0;i<l;i++){
            for(int j=0;j<r;j++){
                for(int k=0;k<c;k++){
                    //input info
                    cin>>br[i][j][k];
                    
                    if(br[i][j][k]=='S') {
                        q.push({i,j,k});
                    }
                    else if(br[i][j][k]=='.') di[i][j][k]=-1;
                }
            }
        }
        
        while(!q.empty()) {
            // if isEscape true do break;
            if(isEscape) break;
            
            // set cur's value
            auto cur = q.front(); q.pop();
            int curX, curY, curZ;
            tie(curZ, curX, curY) = cur;
            
            for(int d=0;d<6;d++){
                int nx = curX+dx[d];
                int ny = curY+dy[d];
                int nz = curZ+dz[d];
                // check range
                if(nx<0||nx>=r||ny<0||ny>=c||nz<0||nz>=l) continue;
                // check condition
                if(di[nz][nx][ny]>0||br[nz][nx][ny]=='#') continue;
                
                di[nz][nx][ny] = di[curZ][curX][curY] + 1;
                // if arrive exit print time
                if(br[nz][nx][ny]=='E') {
                    cout<<"Escaped in "<<di[nz][nx][ny]<<" minute(s).\n";
                    isEscape = true;
                    break;
                }
                q.push({nz, nx, ny});
            }
        }
        // if isEscape is true, pop rest value in queue
        while(!q.empty()) q.pop();
        if(!isEscape) cout<<"Trapped!"<<'\n';
    }
}