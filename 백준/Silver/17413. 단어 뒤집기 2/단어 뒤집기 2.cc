#include <iostream>
#include <string>
#include <stack>

using namespace std;

void print(stack<char> &s) {
    while (!s.empty()) {
        cout<<s.top();
        s.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    getline(cin, word);
    bool tag = false;
    stack<char> s;
    
    for (auto c : word) {
        if (c == '<') {
            print(s);
            tag = true;
            cout << c;
        } else if (c == '>') {
            tag = false;
            cout << c;
        } else if (tag) {
            cout << c;
        } else {
            if (c == ' ') {
                print(s);
                cout << c;
            } else {
                s.push(c);
            }
        }
    }
    
    print(s);
    cout << '\n';
    
    return 0;
}