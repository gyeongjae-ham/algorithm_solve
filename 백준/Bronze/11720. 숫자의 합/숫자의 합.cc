#include <bits/stdc++.h>
using namespace std;
int t,sum;
char c;
int main(){
//    cin>>t>>n;
//    string s = to_string(n);
//    for(char c : s){
//        sum += c-48;
//    }
//    cout<<sum;
//    return 0;
// 숫자가 하나의 값으로 들어오는게 아니다
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>c;
        sum+=c-48;
    }
    cout<<sum;
    return 0;
}