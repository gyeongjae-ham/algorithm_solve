#include <iostream>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. a,b,c,d를 string으로 받아서
    string a, b, c, d;
    cin>>a>>b>>c>>d;
    //2. a+b, c+d를 통해서 붙인 수를 만든다
    a = a+b;
    c = c+d;
    //3. 범위가 1,000,000이므로 stoll로 숫자로 변환 후 계산한다
    long long na = stoll(a);
    long long nc = stoll(c);
    
    cout<<na+nc<<'\n';
}