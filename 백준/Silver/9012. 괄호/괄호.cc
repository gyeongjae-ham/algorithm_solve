#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    
    while(n--) {
        string st;
        cin>>st;
        int size=0;
        bool suspend = false;
        for(auto c: st) {
            if (c=='(') size++;
            else if(c==')') {
                if (size==0) {
                    cout<<"NO\n";
                    suspend = true;
                    break;
                }
                else {
                    size--;
                }
            }
        }
        
        if(suspend == false && size == 0) cout<<"YES\n";
        else if (suspend == false && size != 0) cout<<"NO\n";
    }
    
    
    return 0;
}