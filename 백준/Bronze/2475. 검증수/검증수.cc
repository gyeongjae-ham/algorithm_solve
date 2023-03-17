#include <bits/stdc++.h>
using namespace std;
#define ll long long

int num, sum=0;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
	for(int i=0;i<5;i++) {
        cin>>num;
        sum += num*num;
    }
    cout<<sum%10;
    return 0;
}