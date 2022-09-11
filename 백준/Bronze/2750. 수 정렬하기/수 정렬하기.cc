#include <bits/stdc++.h>
using namespace std;
 
int n, num;
vector<int> v;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    
    return 0;
}