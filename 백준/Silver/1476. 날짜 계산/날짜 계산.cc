#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 15 * 28 * 19 = 7980
    // 1억이 1초니까 다 해봐도 충분하다
    
    int E,S,M;
    cin>>E>>S>>M;
    
    int e=1, s=1, m=1;
    
    for(int i=1;;i++) {
        if (e == E && s == S && m == M) {
            cout << i << '\n';
            break;
        }
        e += 1;
        s += 1;
        m += 1;
        
        if (e == 16) e = 1;
        if (s == 29) s = 1;
        if (m == 20) m = 1;
    }
    return 0;
}