#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int d[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[n] = min(d[n-i^2]) + 1
    //1^2 <= i^2 <= N
    //i<=루트 N
    //d[i] = i가 최대값임
    //1^2 + ... i개 더하면 i가 되므로
    //따라서 최소값을 쉽게 찾기 위해서 d[i] = i로 초기화하고 시작한다
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++) {
        d[i] = i;
        for(int j=1;j*j<=i;j++) {
            if(d[i] > d[i-j*j] + 1) {
                d[i] = d[i-j*j] + 1;
            }
        }
    }
    
    cout<<d[n];
    
    return 0;
}