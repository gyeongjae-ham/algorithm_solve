#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int a,b;
    char del;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        cin>>a>>del>>b;
        cout<<a+b<<'\n';
    }
  
    return 0;
}