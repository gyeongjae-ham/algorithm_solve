#include <iostream>
#include <string>

using namespace std;

int al[26] = {0,};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    cin>>word;
    
    for (auto c : word) {
        al[c-'a']++;
    }
    
    for (auto c : al) {
        cout<<c<<' ';
    }
    return 0;
}