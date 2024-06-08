#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int d[1000];
int a[1000];
int v[1000];

void go(int p) {
    //p == -1이면 끝까지 온거니까 return
    if (p == -1) return;
    //이전 수열 찾아서
    go(v[p]);
    cout<<a[p]<<' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[i][j] = max(d[j]) + 1
    //j<i, a[j] < a[i]
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++) {
        //자기 자신 증가수열이므로 1로 선언
        d[i] = 1;
        //j가 0이 들어갈 수도 있으니까 -1로 선언
        v[i] = -1;
        for(int j=0; j<i; j++) {
            if (a[j] < a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
                //실제로 LIS를 구성하는 숫자를 찾아내야 하는 경우(이 과정을 역추적이라고 한다)
                //역추적 과정(모든 알고리즘에서 역추적 과정은 백트래킹을 사용한다)을 추가한 코드
                v[i] = j;
            }
        }
    }
    
    int ans = d[0];
    int p = 0;
    for(int i=0;i<n;i++) {
        if (ans < d[i]) {
            ans = d[i];
            p = i;
        }
    }
    
    cout<<ans<<'\n';
    go(p);
    cout<<'\n';
    
    
    return 0;
}