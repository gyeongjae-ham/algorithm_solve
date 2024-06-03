#include <iostream>
#include <iomanip>
#include <string>
#include <stack>

using namespace std;

int priority(char c) {
    // (는 항상 우선순위가 가장 낮아서 출력이 안되도록 한다
    if (c == '(') return 0;
    else if (c == '-' || c == '+') return 1;
    // *, /가 가장 높은 우선순위를 가지고 출력되도록 한다
    else return 2; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    cin>>word;
    
    string ans;
    stack<char> o;
    for(auto c : word) {
        //1. 일반 피연산자는 그냥 ans에 담아준다
        if (c>='A' && c<='Z') {
            ans += c;
            //2. 괄호가 열리면 괄호를 담아준다
        } else if (c == '(') {
            o.push(c);
            //3. 닫는 괄호가 나오면 괄호 안의 모든 연산자를 순서대로 꺼내서 ans에 더한다
        } else if (c == ')') {
            while (!o.empty()) {
                char op = o.top();
                o.pop();
                if (op == '(') break;
                ans += op;
            }
            //4. 연산자의 경우에는 이전 연산자보다 우선순위가 낮거나 같은 연산자가 나오면
            //   스택에서 이전 연산자를 꺼내어 ans에 더해준다
        } else {
            while (!o.empty() && priority(o.top()) >= priority(c)) {
                ans += o.top();
                o.pop();
            }
            o.push(c);
        }
    }
    
    while (!o.empty()) {
        char op = o.top();
        o.pop();
        ans += op;
    }
    
    cout<<ans<<'\n';
    
    return 0;
}