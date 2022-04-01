#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a,b,c,N;
string s;
int A[10];
int main(){
    cin>>a>>b>>c;
    N=a*b*c;
    s=to_string(N);
    for(char ch : s){
        A[ch-'0']++;
    };
    for(int i : A){
        cout<<i<<"\n";
    };
    return 0;
}