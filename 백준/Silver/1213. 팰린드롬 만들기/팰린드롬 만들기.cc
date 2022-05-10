#include <bits/stdc++.h>
using namespace std;
// 1. 반례가 있는지 살펴본다
// 홀수인 문자가 2개 이상이면 펠린드롬 못 만든다
string s, ret;
int cnt[200], flag;
char mid;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s; // 문자열 받고,
    for(char c : s) cnt[c]++; // 해당 알파벳의 인덱스 값을 늘려준다
    for(int i='Z'; i>='A'; i--){ // 이렇게 알파벳으로 지정하면 해당하는 숫자로 변환돼서 적용된다
        if(cnt[i]){ // 해당 인덱스에 해당하는 알파벳이 문자열에 있었다면
            if(cnt[i] & 1){ // 홀수 인지 판단한다(비트연산자) cnt[i] % 2 != 0 으로 해도 된다
                mid = char(i); flag++; // char 형으로 mid에 담아주고, flag 값을 늘려준다
                cnt[i]--; // 하나 빼서 짝수로 만들어준다 하나는 이미 mid에 담았으니까 나중에 가운데 담아주면 되고
                // 남은 짝수개는 양쪽에 붙여서 펠린드롬으로 만들어야 하니까
            }
            if(flag==2) break; // 알파벳 갯수가 홀수인게 두 개 이상이면 펜린드롬 안되니까 break한다
            for(int j=0; j<cnt[i]; j+=2){ // 두 개씩 까면서 양쪽에 더해준다
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if(mid) ret.insert(ret.begin() + ret.size() / 2, mid); // mid에 담아둔 값을 가운데에 insert 해준다
    if(flag==2) cout<<"I'm Sorry Hansoo\n"; // 홀수인 알파벳이 두 개 이상이면 출력
    else cout<<ret<<"\n"; // 펠린드롬화한 값 출력
    return 0;
}