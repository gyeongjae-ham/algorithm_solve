#include <bits/stdc++.h>

using namespace std;

int num;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0;i<7;i++){
        cin>>num;
        if(num%2==0) continue;
        v.push_back(num);
    }
    
    if(v.size()) {
        cout << accumulate(v.begin(), v.end(), 0) << "\n";
        cout<<*min_element(v.begin(), v.end())<<"\n";    
    } else {
        cout<<-1<<"\n";
    }
    
    return 0;
}