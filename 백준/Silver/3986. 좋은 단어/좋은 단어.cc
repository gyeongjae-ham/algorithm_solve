#include <bits/stdc++.h>

using namespace std;
int n, i;
string s;
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>n;
        
    int cnt=0;
    for(i=0;i<n;i++){
        stack<char> st;
        cin>>s;
        // 글자 스택에 넣으면서 검사
        for(auto a:s){
            if(st.size()!=0&&a==st.top()) st.pop();
            else st.push(a);
        }
        if(st.empty()) cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}