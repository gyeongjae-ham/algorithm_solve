#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n;
stack<pair<int, int>> S;
ll ans;

int main(void) {
    cin>>n;
    
    while(n--) {
        int h;
        cin>>h;
        int cnt = 1; // var for count
        
        while(!S.empty()&&S.top().X<=h) { // if top of stack height is less than input height
            ans+=S.top().Y; // add count
            if(S.top().X==h) cnt+=S.top().Y; // if input same height raise count's value
            S.pop();
        }
        if(!S.empty()) ans++; // if stack isn't empty, it means that the height higher than input height is left in stack. so add count
        S.push({h,cnt});
    }
    
    cout<<ans;
    return 0;
}