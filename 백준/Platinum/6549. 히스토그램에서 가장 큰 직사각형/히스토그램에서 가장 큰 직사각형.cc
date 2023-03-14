#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    
    while(true) {
        int n;
        cin>>n;
        if(n==0) break; // if input value is zero, stop loop
        
        stack<pair<ll, ll>> S;
        ll ans = 0;
        
        for(int i=0;i<n;i++) {
            int h;
            cin>>h;
            int idx = i; // this value is square's width
            
            while(!S.empty() && S.top().X >= h) {
                ans = max(ans, (i-S.top().Y) * S.top().X); // if stack's top height is higher than input value
                // Calculate the area of all of the rectangles which we can make and compare them
                idx = S.top().Y; // Update the area that we can create with the current height of the rectangle.
                S.pop();
            }
            S.push({h, idx});
        }
        while(!S.empty()) {
            ans = max(ans, (n-S.top().Y) * S.top().X);
            S.pop();
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}