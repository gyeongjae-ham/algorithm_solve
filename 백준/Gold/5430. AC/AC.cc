#include <bits/stdc++.h>

using namespace std;
int t,n,i;
string o,str;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin>>t;
    
    while(t--){
        bool reverse=false, error=false;
        deque<int> dq;
        cin>>o;
        cin>>n;
        cin>>str;
        string s = "";
        
        // 배열 형태로 들어오는 값에서 숫자만 걸러서 dq 넣어주기
        for(i=0;i<str.length();i++){
            if(isdigit(str[i])){
                s += str[i];
            }
            else {
                if(!s.empty()){
                    dq.push_back(stoi(s));
                    s = "";
                }
            }
        }
        
        // order에 따라서 처리
        for (auto a : o) {
            if (a == 'R') {
                if (reverse)
                    reverse = false;
                else
                    reverse = true;
            }
            else {
                if (dq.empty()) {
                    cout << "error" << '\n';
                    error = true;
                    break;
                }
                if (reverse)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        
        // error가 아닌 경우 배열 시작 만들어주고
        if(!error){
            cout<<"[";
        }
        
        // 뒤집어진 경우 출력
        if(reverse&&!dq.empty()){
            for(auto v=dq.rbegin();v!=dq.rend();v++){
                if(v==dq.rend()-1){
                    cout<<*v;
                }
                else cout<<*v<<",";
            }
        }
        // 정방향인 경우 출력
        else if (!reverse&&!dq.empty()){
            for (auto v = dq.begin(); v != dq.end(); v++) {
                if (v == dq.end() - 1)
                    cout << *v;
                else
                cout << *v << ',';
            }
        }
        
        // 괄호 닫기
        if(!error){
            cout<<"]\n";
        }
    }
    return 0;
}