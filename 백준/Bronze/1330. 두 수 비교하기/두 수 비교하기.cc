#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a,b;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
	cin>>a>>b;
    
	if(a > b) {
		cout << ">";
	}
	else if(a < b) {
		cout << "<";
	}
	else {
		cout << "==";
	}
}