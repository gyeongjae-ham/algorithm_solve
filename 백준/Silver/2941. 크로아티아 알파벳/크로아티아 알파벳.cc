#include <bits/stdc++.h>
using namespace std;
vector<string> cr = {"c=","c-","dz=","d-","lj","nj","s=","z="};
string s;

int main() {
    cin>>s;
    for(int i=0; i<cr.size(); i++) {
        while(true) {
            int idx = s.find(cr[i]);
            
            if(idx==string::npos) {
                break;
            }
            
            s.replace(idx, cr[i].length(), "*");
        }
    }
    
    cout<<s.length();
    return 0;
}