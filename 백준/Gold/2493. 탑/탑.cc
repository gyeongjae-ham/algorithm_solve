#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;
stack<pair<int, int>> T;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    T.push({100000001, 0});
    for(int i=1;i<=n;i++) {
        int h;
        cin>>h;
        
        while(T.top().X < h) T.pop();
        cout<<T.top().Y<<' ';
        
        T.push({h, i});
    }
    return 0;
}