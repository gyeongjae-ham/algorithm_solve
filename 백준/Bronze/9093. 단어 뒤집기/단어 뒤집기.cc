#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    cin.ignore();
    
    while(n--) {
        stack<char> s;
        string st;
        getline(cin, st);
        st += '\n';
        
        for(auto c: st) {
            if(c==' ' || c=='\n') {
                while(!s.empty()) {
                    cout<<s.top();
                    s.pop();
                }
                cout<<c;
            }
            else {
                s.push(c);
            }
        }
    }
    
    return 0;
}