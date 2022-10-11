#include <bits/stdc++.h>

using namespace std;

int arr[12];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<"\n";
    return 0;
}