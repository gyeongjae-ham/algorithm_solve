#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    
    for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			s[i] += 32;
		}
		else {
			s[i] -= 32;
		}
	}
    cout<<s<<"\n";
    
    return 0;
}