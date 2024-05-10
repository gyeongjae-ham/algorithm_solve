#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    
    int m = 0;
    stack<int> s;
    string res;
    
    while(n--) {
        int x;
        cin>>x;
        
        if(x > m) {
            while(x > m) {
                s.push(++m);
                res += "+";    
            }
            s.pop();
            res += "-";
        } else {
            bool found = false;
            if (!s.empty()) {
                int top = s.top();
                s.pop();
                res += "-";
                
                if (x == top) found = true;
            }
            
            if (!found) {
                cout<<"NO"<<'\n';
                return 0;
            }
        }
    }
    
    for (auto c : res) {
        cout<<c<<'\n';
    }
    
    return 0;
}