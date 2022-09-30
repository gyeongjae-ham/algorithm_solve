#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, num;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    
    cout<<*min_element(v.begin(), v.end())<<" "<<*max_element(v.begin(), v.end()) <<"\n";
    
    return 0;
}