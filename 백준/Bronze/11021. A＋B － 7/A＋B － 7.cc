#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int a,b;
    cin>>n;
    
    int cnt = 1;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        cout<<"Case #"<<cnt<<": "<<a+b<<'\n';
        cnt++;
    }
  
    return 0;
}