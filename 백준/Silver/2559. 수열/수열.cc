#include <bits/stdc++.h>
// N : 1~10만
// K : 1~10만 - 1 (n 사이값이라고 했으니까)
// 온도는 -100~100
// 연속의 온도의 합이 "최대" 되는 값 - 구간합!!!!
// prefix sum, psum[i] = psum[i-1] + a[i];
// 이 문제의 최솟값은? - 최악의 상황을 가정하면 -100 * (10만 - 1) >> 약 -1000만
// 최대값을 구하라라고 하면 최솟값부터 최대값을 구하라!!
// 최솟값을 구하는 문제는 - 최대값부터 최솟값을 구하라!!
// ret = max(ret, value) 로 계속 최대값을 갱신해 나가면서 만드는 방식!!
// 최대값은 어디서부터?

using namespace std;
typedef long long ll;
int n, k, temp, psum[100001], ret= -10000004;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>temp;
        psum[i] = psum[i-1] + temp; // 구간합 배열을 만들어 준다
    }
    for(int i=k; i<=n; i++){
        ret = max(ret, psum[i] - psum[i-k]); // k만큼의 날짜를 더하는 거니까
        // 구간합 배열에서 k 인덱스부터 k만큼 빼면서 최대값이 있는지 찾아보면서 ret 값을 갱신한다
    }
    cout<<ret<<"\n";
    return 0;
}