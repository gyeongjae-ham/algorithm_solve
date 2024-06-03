#include <iostream>
#include <string>

using namespace std;

int al[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    cin>>word;
    
    fill_n(al, 26, -1);
    for (int i=0;i<word.size();i++) {
        if (al[word[i]-'a'] > -1) continue;
        else al[word[i]-'a'] = i;
    }
    
    for (auto c : al) {
        cout<<c<<' ';
    }
    return 0;
}