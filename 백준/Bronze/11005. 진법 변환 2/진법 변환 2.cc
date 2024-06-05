#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 10진법 수 n과 진법 b를 입력받는다
    int n, b;
    cin>>n>>b;
    //2. while문으로 n이 0보다 같거나 작을 때까지 반복한다
    string ans = "";
    while (n > 0) {
        int r = n % b;
        if (r < 10) {
            //3. n을 b로 나누고 나눈 나머지가 10보다 작으면 '0' == 55을 더해서 문자로 변환한다
            ans += (char)(r + '0');
        } else {
            //4. 10보다 크다면 10을 빼준 후 'A' == 65를 더해서 10이 더해준 문자열로 변환한다
            ans += (char)(r - 10 + 'A');
        }
        n /= b;
    }
    //5. 거꾸로 저장된 상태므로 뒤집어서 출력해준다
    reverse(ans.begin(), ans.end());
    cout<<ans<<'\n';
            
    return 0;
}