#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n, s, cnt=0;
int arr[30];

void func(int cur, int tot) {
    if(cur == n) {
        if(tot == s) cnt++;
        return;
    }
    func(cur+1, tot); // 다음 값을 안더하고 넘어가는 경우
    func(cur+1, tot+arr[cur]); // 다음 값을 더하는 경우
}

int main(void) {
    fastio;
    // init
    cin>>n>>s;
    for(int i=0;i<n;i++) cin>>arr[i];
    
    func(0,0);
    // s==0일 때 공집합은 빼줘야 하니까 하나 빼준다
    if(s==0) cnt--;
    cout<<cnt;
    
    return 0;
}