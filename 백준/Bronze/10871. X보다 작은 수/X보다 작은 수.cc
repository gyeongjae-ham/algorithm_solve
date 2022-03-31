#include <bits/stdc++.h>
using namespace std;
int N, a, i, num;
vector<int> v;
int main(){
    cin>>N>>a;
    for(i=0; i<N; i++){
        cin>>num;
        v.push_back(num);
    }
    
    for (int j : v){
        if(j<a){
            cout<<j<<' ';
        }
    }
    return 0;
}