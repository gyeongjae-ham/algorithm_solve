#include <iostream>
#include <vector>

using namespace std;

bool check[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> primes;
    //1. 1,000,000까지 소수 체크하기
    for (int i=2;i<=1000000;i++) {
        if (check[i] == false) {
            primes.push_back(i);
            // 소수 i의 배수는 소수가 아니므로 true 처리
            for(int j=i+i;j<=1000000;j+=i) {
                check[j] = true;
            }
        }
    }
    //2. 입력받은 숫자에서 숫자를 뺏을 때, 2이상이고(소수여야 하므로)
    //   뺀 소수가 입력받은 숫자 - 소수보다 작을 경우(같은 조합은 하나로 치기 때문에 중복 제거를 위해서)
    //   입력받은 숫자 - 소수가 소수인지 확인해보고(골드바흐) 소수라면 개수에 더해준다
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int ans = 0;
        for(int i=0;i<primes.size();i++) {
            if (n-primes[i]>=2 && primes[i] <= n-primes[i]) {
                if (check[n-primes[i]] == false) {
                    ans++;
                }
            } else {
                break;
            }
        }
        cout<<ans<<'\n';
    }
        
    return 0;
}