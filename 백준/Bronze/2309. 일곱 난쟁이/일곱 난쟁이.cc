#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int tall, sum;
vector<int> v;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for (int i=0;i<9;i++){
        cin>>tall;
        sum+=tall;
        v.push_back(tall);
    }
    sort(v.begin(), v.end());
    
    for (int i=0;i<8;i++){
        for (int j=i+1;j<9;j++){
            if(sum-(v[i]+v[j])==100) {
                for (int k=0;k<9;k++){
                    if (k!=i&&k!=j){
                        cout<<v[k]<<"\n";
                    }
                }
                return 0;
            }
        }
    }    
    return 0;
}