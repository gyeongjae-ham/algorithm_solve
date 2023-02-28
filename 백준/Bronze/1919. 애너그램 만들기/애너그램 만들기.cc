#include <bits/stdc++.h>

using namespace std;

int cnt;
string s1, s2;
int a[26];

int main(void){
    cin>>s1>>s2;
    for(auto c1:s1) a[c1-'a']++;
    for(auto c2:s2) a[c2-'a']--;
    
    for(auto res:a){
        if(res!=0) cnt+=abs(res);
    }
    cout<<cnt;
    
    return 0;
}