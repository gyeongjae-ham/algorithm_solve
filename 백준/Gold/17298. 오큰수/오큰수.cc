#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int a[1000001];
int ans[1000001];
stack<int> s;
int n;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1;i>=0;i--) {
        while(!s.empty()&&s.top()<=a[i]) s.pop();
        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();
        s.push(a[i]);
    }
    for(int k=0;k<n;k++) cout<<ans[k]<<' ';
    return 0;
}