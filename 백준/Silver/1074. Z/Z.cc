#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int func(int n, int r, int c){
    if(n==0) return 0;
    int half = 1<<(n-1);
    // 1번째 사각형일 때
    if(r<half&&c<half) return func(n-1, r, c);
    // 2번째 사각형일 때
    // 앞에 1번째 사각형은 다 지나온거니까 가로*세로로 개수 세어주고 더해주기
    if(r<half&&c>=half) return half*half + func(n-1, r, c-half);
    // 3번째 사각형일 때
    // 앞에 1,2번째 사각형 개수를 더해주기
    if(r>=half&&c<half) return 2*half*half + func(n-1, r-half, c);
    // 4번째 사각형일 때
    // 앞에 1,2,3번째 사각형 개수를 더해주기
    return 3*half*half + func(n-1, r-half, c-half);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,r,c;
    cin>>n>>r>>c;
    cout<<func(n,r,c)<<"\n";
    
    return 0;
}