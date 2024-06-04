#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 뒤가 0인 경우는 2 * 5 경우밖에 없다
    // 2는 짝수에도 들어가므로 5의 개수가 더 적으므로 5의 개수를 세면 된다
    // 25의 경우 5가 두번 들어가므로 5의 배수들의 개수를 더해준다
    //1. 숫자 n을 입력받는다
    int n;
    cin>>n;
    //2. 5의 배수의 개수를 더한다
    int cnt = 0;
    
    for (int i=5;i<=n;i*=5) {
        // 5의 개수 세고
        // 이 다음에 5 * 5로 25의 배수를 찾는다
        // 더 큰 값의 경우 5 * 5 * 5로 찾으면 25배수 찾은 후에 한번더 찾으므로 한번에 찾을 수 있다
        cnt += n/i;
    }    
    
    cout << cnt << '\n';
    
    return 0;
}