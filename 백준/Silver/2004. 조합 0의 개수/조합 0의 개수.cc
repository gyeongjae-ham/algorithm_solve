#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. n,m을 입력받는다 20억 범위라서 int로 받는다(?? 왜 안됨 long long으로 받음)
    ll n,m;
    cin>>n>>m;
    //2. 조합의 2의 개수 구하기
    ll tn = 0;
    for(ll i=2;i<=n;i*=2) {
        tn += n/i;
    }
    // 조합에서 n! / (n-m)! * m! 이므로 n!에서 구한 0의 자리에서 (n-m)!, m! 만큼 빼줘야 한다
    for(ll i=2;i<=(n-m);i*=2) {
        tn -= (n-m)/i;
    }
    for(ll i=2;i<=m;i*=2) {
        tn -= m/i;
    }
    //3. 조합의 5의 개수 구하기
    ll fn = 0;
    for(ll i=5;i<=n;i*=5) {
        fn += n/i;
    }
    for(ll i=5;i<=(n-m);i*=5) {
        fn -= (n-m)/i;
    }
    for(ll i=5;i<=m;i*=5) {
        fn -= m/i;
    }
    //4. 2와 5의 개수 중에 작은 숫자 출력하기
    cout<<min(tn, fn)<<'\n';
    
    return 0;
}