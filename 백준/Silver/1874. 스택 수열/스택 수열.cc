#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

stack<int> S;
string s;
int n;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    
    cin>>n;
    int cnt = 1;
    
    while(n--) {
        
        int num;
        cin>>num;
        
        while(cnt<=num) {
            S.push(cnt++);
            s+="+\n";
        }
        if(S.top()!=num) {
            cout<<"NO\n";
            return 0;
        }
        S.pop();
        s+="-\n";
    }
    
    cout<<s;
    return 0;
}