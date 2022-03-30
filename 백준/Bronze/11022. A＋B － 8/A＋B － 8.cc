#include <bits/stdc++.h>
using namespace std;
int N,a,b,i;

int main(){
    cin>>N;
    for(i=1; i<=N; i++){
        cin>>a>>b;
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
    return 0;
}