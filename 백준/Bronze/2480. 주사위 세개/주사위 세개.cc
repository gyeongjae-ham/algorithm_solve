#include <bits/stdc++.h>
using namespace std;
int f,s,t;

int main(){
    cin>>f>>s>>t;
    
    if(f==s && s==t){
        cout<<10000+(f*1000);
    }
    else if(f==s || s==t){
        cout<<1000+(s*100);
    }
    else if(f==t && f!=s){
        cout<<1000+(f*100);
    }
    else {
        if (f>s && f>t){
            cout<<(f*100);
        }
        else if(s>f && s>t){
            cout<<(s*100);
        }
        else {
            cout<<(t*100);
        }
    }
    return 0;
}