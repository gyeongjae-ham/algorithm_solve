#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(auto c : str) {
        if (c >= 'a' && c <= 'z') {
            cout<<(char)(c - 32);
        }
        else {
            cout<<(char)(c + 32);
        }
    }
    return 0;
}