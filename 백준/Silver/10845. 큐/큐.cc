#include <iostream>
#include <string>

using namespace std;

struct Queue {
    int data[10000];
    int begin, end;
    
    Queue() {
        begin = 0;
        end = 0;
    }
    
    void push(int num) {
        data[end] = num;
        end++;
    }
    
    bool empty() {
        if (begin == end) return true;
        else return false;
    }
    
    int size() {
        return end - begin;
    }
    
    int front() {
        return data[begin];
    }
    
    int back() {
        return data[end-1];
    }
    
    int pop() {
        if (empty()) return -1;
        begin++;
        return data[begin-1];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    
    Queue q;
    
    while (t--) {
        string c;
        cin>>c;
        
        if (c=="push") {
            int a;
            cin>>a;
            q.push(a);
        } else if (c=="pop") {
          if (q.empty()) {
              cout<<-1<<'\n';
          } else {
                cout<<q.front()<<'\n';
                q.pop();
          }
        } else if (c=="empty") {
          cout<<q.empty()<<'\n';
        } else if (c=="size") {
            cout<<q.size()<<'\n';
        }else if (c == "front") {
            if (q.empty()) cout<<-1<<'\n';
            else cout<<q.front()<<'\n';
        } else if (c == "back") {
            if (q.empty()) cout<<-1<<'\n';
            else cout<<q.back()<<'\n';
        }
    }
    
    return 0;
}