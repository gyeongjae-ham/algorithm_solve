#include <bits/stdc++.h>

using namespace std;

int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        string a="",b="";
        for(int i = 0; i < s.size(); i++){
            int half = s.size()/2;
            if(i<half) a += s[i];
            else b += s[i];
        }
        if (a.back()==b.front()) cout<<"Do-it"<<"\n";
        else cout<<"Do-it-Not"<<"\n";
    }
    return 0;
}