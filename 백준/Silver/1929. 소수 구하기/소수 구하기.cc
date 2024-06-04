#include <iostream>

using namespace std;

const int MAX = 1000000;
bool check[MAX+1];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. n,m을 입력받는다
    int n,m;
    cin>>n>>m;
    //2. 0과 1은 소수가 아니므로 체크해준다
    check[0] = check[1] = true;
    //3. 에라토스테네스로 범위 내의 소수가 아닌 수들을 제거한다
    for(int i=2;i*i<=MAX;i++) {
        if (check[i] == false) {
            // i의 배수들을 찾아서 다 제거(소수가 아니므로)
            for (int j=i+i; j<=MAX; j+=i) {
                check[j] = true;
            }
        }
    }
    //4. \n로 출력한다
    // 범위내에서 소수인 것만 출력
    for (int i=n;i<=m;i++) {
        if (check[i] == false) {
            cout<<i<<'\n';
        }
    }
    
    return 0;
}