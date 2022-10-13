#include <bits/stdc++.h>

using namespace std;

int arr[12];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while (true) {
        string s;
        getline(cin,s);    
        
        if(s=="END") break;
        
        reverse(s.begin(), s.end());
        cout<<s<<"\n";
    }
    
    return 0;
}