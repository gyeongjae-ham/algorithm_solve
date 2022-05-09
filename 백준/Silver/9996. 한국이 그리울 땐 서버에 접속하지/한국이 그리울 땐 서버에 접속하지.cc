#include <bits/stdc++.h>
using namespace std;
int n;
string s, ori_s, pre, suf;
int main(){
    cin>>n;
    cin>>ori_s;
    // 나눌 * 모양의 인덱스
    int pos = ori_s.find('*');
    pre = ori_s.substr(0, pos); // 0부터 pos위치까지
    suf = ori_s.substr(pos + 1); // pos+1 부터 끝까지
    for (int i=0; i<n; i++){
        cin>>s;
        // 들어온 원래 문자열 보다 사이즈가 크면 당연히 아니므로
        if(pre.size() + suf.size() > s.size()){
            cout<<"NE\n";
        }else{
            // 비교할 prefix의 값과 들어온 문자열의 prefix만큼의 길이의 문자열이 같으면서
            // 비교할 sufix의 값과 들어온 문자열의 sufix만큼의 길이의 문자열이 같으면 같은 파일명
            if(pre==s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout<<"DA\n";
            else cout<<"NE\n";
        }   
    }
    return 0;
}