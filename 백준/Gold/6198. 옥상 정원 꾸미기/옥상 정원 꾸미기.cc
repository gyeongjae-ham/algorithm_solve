#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

stack<int> s;
int n;
ll ans;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    
    while(n--) {
        ll h;
        cin>>h;
        
        while(!s.empty() && s.top() <= h) s.pop();
        ans+=s.size();
        s.push(h);
    }
    cout<<ans;
    return 0;
}