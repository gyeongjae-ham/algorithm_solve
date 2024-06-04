#include <iostream>

using namespace std;

bool isPrime(int b) {
    if (b < 2) return false;
    for(int i=2; i*i<=b; i++) {
        if (b % i == 0) return false;
    }
    return true;
}
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 숫자 개수 n을 입력받는다.
    int n;
    cin>>n;
    //2. 제한 시간 2초이고 n의 개수가 100이하이고, 숫자가 1000이하이므로 여유가 있다 그냥 소수 판별하는 식으로 계산가능
    int cnt = 0;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        
        if (isPrime(a)) cnt++;
    }
    cout<<cnt;
    
    return 0;
}