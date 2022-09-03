#include <bits/stdc++.h>

using namespace std;
vector<int> v;
int n, num, x, i, cnt=0;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    cin>>x;
    for(auto i:v){
        if (i==x) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}