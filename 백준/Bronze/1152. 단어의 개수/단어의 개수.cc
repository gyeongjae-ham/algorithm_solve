#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void) {
	string s;
	getline(cin, s);

	int cnt = 0; 
    bool chk = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			chk = true;
		}
		else if (chk) {
			chk = false;
			cnt++;
		}

	}
	cout << cnt;
	return 0;
}