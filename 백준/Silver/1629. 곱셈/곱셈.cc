#include <bits/stdc++.h>
using namespace std;
// 곱셈 문제 중에서 가장 유명한 문제
// 2를 10번 곱하는 건 2를 5번 곱하는 것 두 개를 곱하는 것에서 착안
// divide and conquer 방식 - https://sinseonc.tistory.com/10
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b){
    if(b==1) return a%c; // a의 제곱하는 값이 1이면 그냥 a를 c로 나눈 나머지 값 반환
    ll _c = go(a, b/2); // divide and conquer 알고리즘 처럼 a의 b승을 계속 두 개로 나누면서 내려간다
    _c = (_c * _c) % c; // b승을 나눈 것끼리 곱한게 나누기 전 a의 b승이므로
    if(b%2) _c = (_c * a) % c; // 홀수에서 -1 뺀 짝수로 _c가 만들어져서 서로 곱했으니 남은 한번을 곱해주는 것
    return _c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>a>>b>>c;
    cout<<go(a,b)<<"\n";
    return 0;
}