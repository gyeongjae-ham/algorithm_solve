#include <bits/stdc++.h>

using namespace std;
int T,num,i;
stack<int> stk;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>T;
    for(i=0;i<T;i++) {
        cin>>num;
        if(num==0){
            stk.pop();
        }
        else {
            stk.push(num);
        }
    }
    
    int sum=0;
    for(i=0;stk.empty()!=1;i++){
        sum += stk.top();
        stk.pop();
    }
    cout<<sum<<"\n";
    
    return 0;
}