#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 총 횟수 n을 입력받는다
    int n;
    cin>>n;
    //2. a,b 숫자를 받는다 45,000 이므로 int로 받는다
    while (n) {
        int a,b;
        cin>>a>>b;
        //3. gcd를 구한다
        int g = gcd(a,b);
        //4. lcd를 구한다
        //5. 출력한다
        cout<<(a*b)/g<<'\n';
        n--;
    }
    
    return 0;
}