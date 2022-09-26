#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int a,b,c;
    cin>>a>>b>>c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    for (auto a:v){
        cout<<a<<" ";
    }
    
    return 0;
}