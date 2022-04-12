#include <bits/stdc++.h>
using namespace std;
int N;

int main() {
    cin>>N;
    int f,t;
    f = N/5;
    while(true) {
        if (f<0) {
            cout<<-1;
            return 0;
        }
        if ((N-(f*5))%3==0) {
            t = (N-(f*5))/3;
            break;
        }
        f--;
    }
    cout<<f+t;
    return 0;
}