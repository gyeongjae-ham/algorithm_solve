#include <bits/stdc++.h>

using namespace std;
vector<int> v;
vector<int> res;
int n, num, x, i;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    for (i=0;i<n;i++) {
        cin>>num;
        v.push_back(num);
    }
    cin>>x;
    
    int start=0, end=n-1, cnt=0;
    sort(v.begin(), v.end());
    while (start < end) {
        if(v[start]+v[end]==x) {
            cnt++;
            end--;
        } else if(v[start]+v[end]>x){
            end--;
        } else {
            start++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}