//
// Created by 함경재 on 2022/03/20.
//

#include <bits/stdc++.h>
using namespace std;

// 최대공약수(gcd)
int gcd(int a, int b){
    if( a == 0) return b;
    return gcd(b % a, a);
}


// 최소공배수(lcm)
int a,b;
int lcm = a * b / gcd(b % a, a);



// 모듈러 연산
// 0. a == b mod n 과 b == c mod n 은 a == c mod n 을 의미
// 1. [(a mod n)+(b mod n)] mod n = (a+b) mod n
// 2. [(a mod n)-(b mod n)] mod n = (a-b) mod n
// 3. [(a mod n)*(b mod n)] mod n = (a*b) mod n



// 에라토스테네스의 채
// 소수가 아닌 값들에 대한 boolean 배열을 만들어 소수만을 걸러내는 방법
int che[10];
vector<int> era(int mx_n){
    vector<int> v;
    for(int i=2; i<=mx_n; i++){
        if(che[i]) continue;
        for (int j = 2 * i; j <= mx_n; j += i) {
            che[j] = 1;
        }
    }
}
// 하지만 이는 배열의 크기가 필요하기 때문에 1000만 이상을 벗어나면 쓰기가 힘들다
// 이럴 경우에는 소수를 판별하는 bool 함수를 만들어 줘야 한다

bool check(int n){
    if (n <= 1 || n % 2 == 0) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if(n%i==0) return 0;
    }
    return 1;
}




// 등차수열의 합
int n;
int k = n * (n + 1) / 2;