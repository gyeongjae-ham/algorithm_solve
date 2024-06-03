#include <iostream>
#include <iomanip>
#include <string>
#include <stack>

using namespace std;

int nums[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    
    string word;
    cin>>word;
    
    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }
    
    stack<double> s;
    for(auto c : word) {
        if (c>='A' && c<='Z') {
            s.push((double)nums[c-'A']);
        } else {
            double op2 = s.top(); s.pop();
            double op1 = s.top(); s.pop();
            if (c=='+') {
                s.push(op1 + op2);
            } else if (c=='-') {
                s.push(op1 - op2);
            } else if (c=='*') {
                s.push(op1 * op2);
            } else if (c=='/') {
                s.push(op1 / op2);
            }
        }
    }
    cout << fixed << setprecision(2) << s.top();
    
    return 0;
}