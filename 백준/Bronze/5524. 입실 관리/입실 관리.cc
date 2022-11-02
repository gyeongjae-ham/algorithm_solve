#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    for(int i=0;i<n;i++){
        string ans = "";
        string s;
        cin>>s;
        
        for(char a:s){
            if((int)a < 97) ans += (char)((int)a + 32);
            else ans += a;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}