#include <bits/stdc++.h>
using namespace std;
// 문제를 풀 때 종이나 아이패드에 시각화 하는 작업을 해보자
// 문자를 세로로 비교하면서 같은 문자열일 경우 없애면서 찾는다 stack 구조 사용하기!!
int n, ret;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s; // 문자열을 받고
        stack<char> stk; // stack 선언
        for(char c : s){ // 받은 문자열 s의 문자 c를 비교
            // stack의 사이즈를 꼭 체크해줘야 error가 나면서 터지지 않는다!!!!
            if(stk.size() && stk.top() == c) stk.pop(); // 비교할 문자 c와 stack 맨위의 문자가 같으면 pop 시킨다
            else stk.push(c); // 같지 않으면 stack에 push해준다
        }
        if(stk.size()==0) ret++; // 반복 후 stack 사이즈가 0이면 다 사라진 거니까 좋은 문자
    }
    cout<<ret<<"\n";
    return 0;
}