#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second


int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    
    int n;
    cin>>n;
    while(n--) {
        list<char> L;
        string s;
        cin>>s;
        auto cursor = L.end();
        
        for(auto c:s) {
            if(c=='<') {
                if(cursor!=L.begin()) cursor--;
            }
            else if(c=='>') {
                if(cursor!=L.end()) cursor++;
            }
            else if(c=='-') {
                if(cursor!=L.begin()) {
                    cursor--;
                    cursor = L.erase(cursor);
                }
            }
            else L.insert(cursor, c);
        }
        
        for(auto i:L) cout<<i;
        cout<<'\n';
    }
    return 0;
}