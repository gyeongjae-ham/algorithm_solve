#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b==0) return a;
    else return gcd(b, (a%b));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 동생이 1명일 경우 D만큼 이동하면서 동생을 찾을 수 있는 D의 값은
    // 동생과 내 위치의 차이 거리의 약수들이다
    // 여러 동생들의 공통된 약수를 찾아야 하므로 최대공약수를 구하는 문제
    
    //1. 동생수 n과 내 위치 s를 받는다
    int n,s;
    cin>>n>>s;
    //2. 동생수 n만큼 동생들 위치를 받는다
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        int d;
        cin>>d;
        //3. 동생들 위치와 내 위치 중 큰 값을 기준으로 뺄셈으로 거리를 구한다
        int diff = d-s;
        if (diff < 0) diff = -diff;
        v[i] = diff;
    }
    
    int ans = v[0];
    //4. 모든 거리들의 gcd를 구한다
    for(int i=1;i<n;i++) {
        ans = gcd(ans, v[i]);
    }
    cout<<ans<<'\n';
    
    return 0;
}