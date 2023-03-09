#include <bits/stdc++.h>

using namespace std;

int n;
string s1, s2;

int main(void){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s1>>s2;
        int alp[27]={};
        bool res=true;
        
        for(auto c:s1) alp[c-'a']++;
        for(auto c1:s2) alp[c1-'a']--;
        
        for(auto chk:alp) {
            if(chk!=0) res=false;
        }
        
        if(res) cout<<"Possible\n";
        else cout<<"Impossible\n";
    }
    
    return 0;
}