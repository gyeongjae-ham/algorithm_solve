#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    while(true){
        string s;
        getline(cin, s);
        if(s==".") break;
        stack<char> st;

        bool ans = true;
        for(auto a:s){
            if(a=='('||a=='[') st.push(a);
            else if(a==')'){
                if(st.empty()||st.top()!='('){
                    ans = false;
                    break;
                }
                st.pop();
            }
            else if(a==']'){
                if(st.empty()||st.top()!='['){
                    ans = false;
                    break;
                }
                st.pop();
            }
        }
        if(!st.empty()) ans = false;
        if(ans==true) cout<<"yes\n";
        else cout<<"no\n";
    }    
    return 0;
}