#include <bits/stdc++.h>
using namespace std;
string a;
int n[26];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a;
    
    // 문자열에서 문자(char) 단위로 카운트해서 배열에서 해당 index값 더해주기
    for(char i : a) {
        n[i-'a']++; // a:97 ~ z:122 이므로 97(a)을 빼줌으로 26 배열 안으로 넣어주기
    }
    for(int i=0; i<26; i++) cout << n[i] << " "; // 출력
    return 0;
}