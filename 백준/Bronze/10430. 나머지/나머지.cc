#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 숫자 a,b,c를 받는다 10,000 이므로 int
    int a,b,c;
    cin>>a>>b>>c;
    //2. 나머지 계산해서 반환한다
    cout<<(a+b)%c<<'\n';
    cout<<((a%c)+(b%c))%c<<'\n';
    cout<<(a*b)%c<<'\n';
    cout<<((a%c)*(b%c))%c<<'\n';
    return 0;
}