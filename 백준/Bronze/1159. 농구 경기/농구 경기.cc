#include <bits/stdc++.h>
using namespace std;
int n, a[26];
string s, ret;
int main(){
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>s; // 선수 이름을 받아오고
        a[s[0]-'a']++; // 97을 빼서 26배열크기 안에 담아준다 이 수가 5 넘는게 있으면 경기 가능
    }
    for(int i=0; i<26; i++) if(a[i]>=5) ret += i + 'a'; // 다시 문자형으로 변환해서 담아준다
    
    if(ret.size()) cout<<ret<<"\n"; // 결과를 담는 ret 변수에 값이 있으면 출력해주고 
    else cout<<"PREDAJA"<<"\n"; // 없으면 PREDAJA 항복한다
    
    return 0;
}