#include <iostream>
#include <string>

using namespace std;

int al[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    while (getline(cin, s)) {
        int cc = 0;
        int sc = 0;
        int nc = 0;
        int ec = 0;
        
        for (auto c : s) {
            //1. 대문자는 A~Z로 검증
            if (c >= 'A' && c <= 'Z') cc++;
            //2. 소문자는 a-z로 검증
            else if (c >= 'a' && c <= 'z') sc++;
            //3. 빈칸은 ==
            else if (c == ' ') ec++;
            //4. 나머지는 숫자로 생각해서 더해주기
            else nc++;
        }
        
        cout << sc << ' ' << cc << ' ' << nc << ' ' << ec << '\n';
    }
    return 0;
}