#include <iostream>
#include <string>

using namespace std;
string rot13(string s) {
    for (int i=0; i<s.size(); i++) {
        //1. m까지는 13 더하면 z
        if (s[i] >= 'a' && s[i] <= 'm') {
            s[i] = s[i] + 13;
        }
        //2. n부터 z는 다시 a부터 순환해야 하므로 -13
        else if (s[i] >= 'n' && s[i] <= 'z') {
            s[i] = s[i] - 13;
        }
        //3. 대문자도 마찬가지
        else if (s[i] >= 'A' && s[i] <= 'M') {
            s[i] = s[i] + 13;
        }
        else if (s[i] >= 'N' && s[i] <= 'Z') {
            s[i] = s[i] - 13;
        }
    }
    
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    getline(cin, s);
    
    cout<<rot13(s)<<'\n';
    
    return 0;
}