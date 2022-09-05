#include <bits/stdc++.h>

using namespace std;
int T, i, j;
string s;
list<char> l;
list<char>::iterator it;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>T;
    
    for(i=0;i<T;i++){
        cin>>s;
        l.clear();
        it=l.begin();
        for(j=0;j<s.length();j++){
            if(s[j]=='<'&&it!=l.begin()) it--;
            else if(s[j]=='>'&&it!=l.end()) it++;
            else if(s[j]=='-'&&it!=l.begin()) {
                it=l.erase(--it);
            }
            else if(s[j]!='<'&&s[j]!='>'&&s[j]!='-') l.insert(it, s[j]);
        }
        for(auto v=l.begin(); v!=l.end(); v++) cout<<*v;
        cout<<"\n";
    }
    return 0;
}