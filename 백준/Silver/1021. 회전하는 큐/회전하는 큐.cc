#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

deque<int> DQ;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) DQ.push_back(i);
    int ans = 0;
    while(m--) {
        int fn;
        cin>>fn;
        int idx = find(DQ.begin(), DQ.end(), fn) - DQ.begin(); // find target number's index
        
        while(DQ.front()!=fn) {
            if (idx < (int)DQ.size() - idx) { // if idx lower than DQ.size()-idx
                // That means the target number is relatively towards the front
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            ans++;
        }
        DQ.pop_front();
    }
    cout<<ans;
}