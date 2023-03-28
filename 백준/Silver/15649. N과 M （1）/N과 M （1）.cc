#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,m;
int arr[10];
bool isused[10];

void func(int k) { // 현재 k개까지 숫자를 선택한 상황
    if(k == m) { // m개를 모두 선택했다면
        for(int i=0;i<m;i++) {
            cout<<arr[i]<<' '; // arr에 기록해 둔 수를 출력
        }
        cout<<'\n';
        return;
    }
    // 아직 m개를 다 선택하지 않았다면
    for(int i=1;i<=n;i++) { // 1부터 n까지의 숫자에서
        if(!isused[i]) { // 사용되지 않은 숫자를
            arr[k] = i; // k번째 수로 지정해주고
            isused[i] = 1; // 사용처리 후
            func(k+1); // 그 다음 위치를 찾게 보낸 후
            isused[i] = 0; // 돌아온다면 현재 숫자에서 경우의 수를 다 돌아본거니까 다시 미방문으로 표시해주기
        }
    }
}

int main(void) {
    fastio;
    cin>>n>>m;
    func(0);
}