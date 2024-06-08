#include <iostream>
#include <algorithm>

using namespace std;

long long d[100001][4];
const long long mod = 1000000009LL;
const int limit = 100000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //d[i][j] = i를 1,2,3의 합으로 나타내는 방법의 수. 마지막 숫자는 j
    //d[i][1] = i를 1,2,3의 합으로 나타내는 방법의 수. 마지막 숫자는 1
    //          바로 전에 사용할 수 있는 숫자는 2,3
    //d[i][2] = i를 1,2,3의 합으로 나타내는 방법의 수. 마지막 숫자는 2
    //          바로 전에 사용할 수 있는 숫자는 1,3
    //d[i][3] = i를 1,2,3의 합으로 나타내는 방법의 수. 마지막 숫자는 3
    //          바로 전에 사용할 수 있는 숫자는 1,2
    //d[0]을 1로 초기화하면 중복이 발생한다
    //d[0][1] = 1, d[0][2] = 1, d[0][3] = 1 이렇게 초기화하면
    //d[1][1] = d[0][2] + d[0][3] = 2(중복 발생)
    //따라서 각 상황의 시작값을 중복없이 초기화 해줘야 한다
    
    for(int i=1; i<=limit; i++) {
        if (i-1 >= 0) {
            d[i][1] = d[i-1][2] + d[i-1][3];
            if(i == 1) {
                d[i][1] = 1;
            }
        }
        if (i-2 >= 0) {
            d[i][2] = d[i-2][1] + d[i-2][3];
            if(i == 2) {
                d[i][2] = 1;
            }
        }
        if (i-3 >= 0) {
            d[i][3] = d[i-3][1] + d[i-3][2];
            if(i == 3) {
                d[i][3] = 1;
            }
        }
        d[i][1] %= mod;
        d[i][2] %= mod;
        d[i][3] %= mod;
    }
    
    //1. 테스트 케이스 t 입력받는다
    int t;
    cin>>t;
    //2. 출력한다
    while(t--) {
        int n;
        cin>>n;
        cout<<(d[n][1] + d[n][2] + d[n][3]) % mod<<'\n';
    }
    
    return 0;
}