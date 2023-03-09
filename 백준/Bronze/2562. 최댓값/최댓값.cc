#include <bits/stdc++.h>

using namespace std;

int num;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0;i<9;i++){
        cin>>num;
        v.push_back(num);
    }
    
    cout<<*max_element(v.begin(), v.end())<<"\n";
    cout<<max_element(v.begin(), v.end())-v.begin()+1<<'\n';
        
    return 0;
}