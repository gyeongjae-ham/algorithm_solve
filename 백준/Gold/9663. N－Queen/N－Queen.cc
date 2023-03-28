#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n, cnt=0;
int idx1[40]; // 같은 열 확인
int idx2[40]; // 오른쪽 위 방향 대각선 확인
int idx3[40]; // 오른쪽 아래 방향 대각선 확인

void func(int cur) {
    if(cur == n) {
        cnt++;
        return;
    }
    
    for(int i=0;i<n;i++) {
        if(idx1[i] || idx2[i+cur] || idx3[i-cur+n-1]) continue;
        idx1[i] = 1;
        idx2[i+cur] = 1;
        idx3[i-cur+n-1] = 1;
        func(cur+1);
        idx1[i] = 0;
        idx2[i+cur] = 0;
        idx3[i-cur+n-1] = 0;
    }
}

int main(void) {
    fastio;
    cin>>n;
    func(0);
    cout<<cnt;
    return 0;
}