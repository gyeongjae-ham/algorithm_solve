#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int main() {
    fi;
    
    vector<int> v;
    
    for (int i = 0; i < 7; i++) {
        int n;
        cin>>n;
        
        if (n % 2 != 0) v.push_back(n);
    }
    
    if (v.size() != 0) {
        cout << accumulate(v.begin(), v.end(), 0) << "\n";
        cout << *min_element(v.begin(), v.end());
    }
    else cout << -1;
  
    return 0;
}