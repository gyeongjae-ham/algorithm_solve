#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    queue<int> q;
    
    int a,b;
    cin>>a>>b;
    
    for(int i=1;i<=a;i++) q.push(i);

    cout<<"<";
    for(int i=0;i<a-1;i++) {
        for(int j=0;j<b-1; j++) {
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<", ";
        q.pop();
    }
    cout<<q.front()<<">";
    
    return 0;
}