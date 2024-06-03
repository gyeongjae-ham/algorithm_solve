#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 숫자 a,b를 입력받는다
    int a,b;
    cin>>a>>b;
    //2. gcd 함수에 보내서 최대공약수를 찾는다
    int g = gcd(a,b);
    //3. lcd 함수에 보내서 최소공배수를 구한다
    cout<<g<<'\n'<<(a*b)/g<<'\n';
    return 0;
}