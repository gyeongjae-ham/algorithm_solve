#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    string a, b;
    string ans = "";
    cin >> a >> b;
 
    int n = a.length() - 1;
    int m = b.length() - 1;
 
 
    //자릿수 맞춰준다.
    string tmp = "";
    if (n < m) {
        for (int i = 0; i < m - n; i++) {
            tmp += "0";
        }
        a = tmp + a;
    }
    else if (n > m) {
        for (int i = 0; i < n - m; i++) {
            tmp += "0";
        }
        b = tmp + b;
    }
 
    
    int len = a.size(); //자릿수 위에서 맞춰줬으므로 길이 아무거나 상관없음
    int x, y, z;
    int up = 0;
 
//1의 자리부터 진행
    for (int i = len - 1; i >= 0; i--) {
        x = a[i] - '0';
        y = b[i] - '0';
        z = x + y;
        if (up == 1) {
            z += 1;
            up = 0;
        }
 
 
        if (z > 9) {
            ans += to_string(z % 10);
            up = 1;
        }
        else {
            ans += to_string(z);
        }
    }
    
    if (up == 1) ans += "1";
 
 
    reverse(ans.begin(), ans.end());
 
    cout << ans << '\n';
 
 
    return 0;
}