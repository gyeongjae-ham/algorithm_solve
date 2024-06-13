#include <iostream>

using namespace std;

int d[10001];
int a[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[i][j] = a[i]까지 포도주를 마셨을 때, j번 연속해서 마심
    //d[i][0] = 0번 연속해서 마셨으므로, a[i]를 마시지 않았음
    //d[i][1] = 1번 연속해서 마셨음. a[i]는 마시고 a[i-1] 안 마심
    //d[i][2] = 2번 연속해서 마셨음. a[i-1]까지는 마시고, a[i-2]는 안 마심
    
    //1. 포도주 잔의 수 n을 입력받는다
    int n;
    cin>>n;
    //2. 포도주 양 입력받는다
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    
    d[1] = a[1];
    d[2] = a[1] + a[2];
    
    for(int i=3;i<=n;i++) {
        d[i] = d[i-1];
        if (d[i] < d[i-2] + a[i]) {
            d[i] = d[i-2] + a[i];
        }
        if (d[i] < d[i-3] + a[i-1] + a[i]) {
            d[i] = d[i-3] + a[i-1] + a[i];
        }
    }
    
    cout<<d[n]<<'\n';
    
    return 0;
}