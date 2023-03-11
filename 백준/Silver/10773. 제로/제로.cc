#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

stack<int> S;
int k, num, sum=0;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>k;
    
    while(k--) {
        cin>>num;
        
        if(num!=0) {
            sum+=num;
            S.push(num);
        }
        else {
            sum-=S.top();
            S.pop();
        }
    }
    cout<<sum;
    return 0;
}