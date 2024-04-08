#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int main() {
    fi;
    
    vector<int> v(3);
    cin>>v[0]>>v[1]>>v[2];
    
    sort(v.begin(), v.end());
    cout<<v[0]<<' '<<v[1]<<' '<<v[2];
  
    return 0;
}