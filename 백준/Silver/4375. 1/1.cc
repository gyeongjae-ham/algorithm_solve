// 브루트포스 문제
// 처음에 무식하게 나열한 후에 규칙성을 찾자
#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    while(scanf("%d", &n) != EOF){ // scanf는 입력받은 갯수를 리턴한다, EOF == End Of File
        int cnt=1, ret=1; // cnt는 n의 배수를 찾는 숫자, ret은 cnt의 자릿수
        while(true){
            if(cnt%n==0){
                printf("%d\n", ret); // n의 배수이면 출력하고 종료
                break;
            } else {
                cnt = (cnt*10)+1; // n의 배수가 아니면 10을 곱해주고 1을 더해서 다시 1로 이뤄진 숫자 만들어주기
                cnt %= n;
                // x mod N = (x mod N) mod N 임을 이용해보자.
                // 예를 들어, 111이 N으로 나눠지지 않아서 1111로 넘어갈 때, 1111을 바로 다음 반복문으로 넘기는 것이 아니라 mod N 연산을 해주고 넘기는 것이다. 그러면 숫자가 계속 커지는 것을 방지할 수 있다.
                // 숫자가 매우 커질 때 modular 연산을 이용해서 줄일 수 있다는 것을 기억하자!
                ret++; // 자릿수 늘려주기
            }
        }
    }
    return 0;
}