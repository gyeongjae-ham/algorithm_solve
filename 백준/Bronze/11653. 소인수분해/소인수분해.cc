#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void convert(int num, int base) {
    if (num == 0) return;
    convert(num/base, base);
    cout<<num%base<<' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 숫자 n을 입력받는다
    int n;
    cin>>n;
    //2. i*i까지 돌면서 소인수 분해 값을 출력한다
    for(int i=2;i*i<=n;i++) {
        while (n % i == 0) {
            cout<<i<<'\n';
            n /= i;
        }
    }
    
    //3. 돌고 난 후 n이 1보다 크다면 출력한다
    if (n>1) cout<<n<<'\n';
    
    return 0;
}