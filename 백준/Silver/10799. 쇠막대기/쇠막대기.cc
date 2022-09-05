#include <bits/stdc++.h>

using namespace std;
int i;
string s;
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>s;
    stack<char> st;
    
    int cnt=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            st.pop();
            if(s[i-1]=='(') cnt+=st.size();
            else cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}