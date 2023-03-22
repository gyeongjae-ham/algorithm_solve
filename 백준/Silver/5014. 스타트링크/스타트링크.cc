#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int f,s,g,u,d;
int di[1000002];
queue<int> Q;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>f>>s>>g>>u>>d;
    fill(di, di+f+1, -1);
    di[s] = 0;
    Q.push(s);
    
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int d:{cur+u, cur-d}){
            if(d>f||d<=0||di[d]!=-1) continue;
            di[d] = di[cur]+1;
            Q.push(d);
        }
    }
    
    if(di[g]==-1) cout << "use the stairs";
    else cout<<di[g];
    return 0;
}