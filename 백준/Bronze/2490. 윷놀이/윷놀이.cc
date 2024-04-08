#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int main() {
    fi;
    
    for (int i = 0; i < 3; i++) {
        vector<int> v(4);

        cin>>v[0]>>v[1]>>v[2]>>v[3];
        int cnt = count(v.begin(), v.end(), 0);
        
        if (cnt == 1) cout << "A" << "\n";
        else if (cnt == 2) cout << "B" << "\n";
        else if (cnt == 3) cout << "C" << "\n";
        else if (cnt == 4) cout << "D" << "\n";
        else cout << "E" << "\n";    
    }
  
    return 0;
}