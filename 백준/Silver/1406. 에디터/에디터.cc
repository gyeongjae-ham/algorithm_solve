#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    cin>>word;
    
    int n;
    cin>>n;
    
    stack<char> lst;
    stack<char> rst;
    
    for(auto c: word) lst.push(c);
    
    while(n--) {
        char cmd;
        cin>>cmd;
        if(cmd == 'L') {
            if(!lst.empty()) {
                rst.push(lst.top());
                lst.pop();
            }
        }
        else if(cmd == 'D') {
            if(!rst.empty()) {
                lst.push(rst.top());
                rst.pop();
            }
        }
        else if(cmd == 'B') {
            if(!lst.empty()) {
                lst.pop();
            }
        }
        else {
            char nw;
            cin>>nw;
            lst.push(nw);
        }
    }
    
    while(!lst.empty()) {
        rst.push(lst.top());
        lst.pop();
    }
    
    while(!rst.empty()) {
        cout<<rst.top();
        rst.pop();
    }
    
    return 0;
}