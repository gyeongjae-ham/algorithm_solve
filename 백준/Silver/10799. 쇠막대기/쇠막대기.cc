#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    cin >> word;
    
    stack<int> s;
    
    int idx = 1;
    int res = 0;
    for (auto c : word) {
        if (c == '(') {
            s.push(idx);
            idx++;
        } else if (c == ')') {
            if (idx - s.top() == 1) {
                s.pop();
                res += s.size();
            }
            else {
                s.pop();
                res++;
            }
        }
    }
    
    cout << res;
    
    return 0;
}