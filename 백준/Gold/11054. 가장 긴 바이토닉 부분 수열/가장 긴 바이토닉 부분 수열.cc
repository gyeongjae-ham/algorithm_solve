#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //가장 긴 바이토닉 부분 수열
    //i까지의 LIS를 구한 후 i부터 감소하는 수열의 길이를 구한 후 더해서 1을 뺀다(i번째 수는 중복이므로)
    
    //1. 수열의 길이 n
    int n;
    cin>>n;
    //2. 수열 입력
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    //3. LIS
    vector<int> d(n);
    for(int i=0;i<n;i++) {
        d[i] = 1;
        for(int j=0;j<i;j++) {
            if(a[j] < a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
            }
        }
    }
    //4. 감소하는 부분 수열
    vector<int> d2(n);
    for(int i=n-1;i>=0;i--) {
        d2[i] = 1;
        for(int j=i+1;j<n;j++) {
            if(a[j] < a[i] && d2[i] < d2[j] + 1) {
                d2[i] = d2[j] + 1;
            }
        }
    }
    
    //5. 가장 긴 바이토닉 부분 수열 찾아서 출력
    int ans = 0;
    for(int i=0;i<n;i++) {
        if (ans < d[i] + d2[i] -1) {
            ans = d[i] + d2[i] - 1;
        }
    }
    
    cout<<ans<<'\n';
        
    return 0;
}