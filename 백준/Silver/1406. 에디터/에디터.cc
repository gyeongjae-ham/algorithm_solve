#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    list<char> L;
    
    string s;
    cin>>s;
    for(auto c:s) L.push_back(c);
    auto cursor = L.end();
    int n;
    cin>>n;
    
    while(n--){
        char nc;
        cin>>nc;
        
        if(nc=='P') {
            char add;
            cin>>add;
            L.insert(cursor, add);
        }
        else if(nc=='L'){
            if(cursor!=L.begin()) cursor--;
        }
        else if(nc=='D'){
            if(cursor!=L.end()) cursor++;
        }
        else{
            if(cursor!=L.begin()){
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    
    for(auto i:L) cout<<i;
    return 0;
}