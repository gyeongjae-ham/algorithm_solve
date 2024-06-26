#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    deque<int> dq;
    int t;
    cin>>t;
    
    while (t--) {
        string cmd;
        cin>>cmd;
        
        if (cmd == "push_back") {
            int num;
            cin>>num;
            dq.push_back(num);
        } else if (cmd == "push_front") {
            int num;
            cin>>num;
            dq.push_front(num);
        } else if (cmd == "front") {
            if (dq.empty()) cout<<-1<<'\n';
            else cout<<dq.front()<<'\n';
        } else if (cmd == "back") {
            if (dq.empty()) cout<<-1<<'\n';
            else cout<<dq.back()<<'\n';
        } else if (cmd == "pop_front") {
            if (dq.empty()) cout<<-1<<'\n';
            else {
                cout<<dq.front()<<'\n';
                dq.pop_front();
            }
        } else if (cmd == "pop_back") {
            if (dq.empty()) cout<<-1<<'\n';
            else {
                cout<<dq.back()<<'\n';
                dq.pop_back();
            }
        } else if (cmd == "size") {
            cout<<dq.size()<<"\n";
        } else if (cmd == "empty") {
            cout<<dq.empty()<<'\n';
        }
    }
    
    return 0;
}