#include <bits/stdc++.h>

using namespace std;

string t;
int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        string t;
        cin>>t;
        
        if(t[t.length()-1]%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    
    return 0;
}