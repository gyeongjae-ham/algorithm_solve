#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    getline(cin, s); // 먼저 공백이 있는 문자열을 받기 위해 getline으로 받아주고
    
    // for문 안에서 대, 소문자를 구분지어 13을 더해준다
    for(int i=0; i<s.size(); i++){
        if(s[i]>=65 && s[i]<97){ // 대문자 먼저
            // 대문자 범위는 65~90이다
            if(s[i]+13>90) s[i] = s[i]-26+13;
            else s[i] = s[i]+13;
        }
        else if(s[i]>=97 && s[i]<=122){
            if(s[i]+13 > 122) s[i] = s[i]-26+13;
            else s[i] = s[i]+13;
        }
        cout<<s[i];
    }
    return 0;
}