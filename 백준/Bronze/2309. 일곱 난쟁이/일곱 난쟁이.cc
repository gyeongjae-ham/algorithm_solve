#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //난쟁이가 아닌 2명을 찾으면 됨
    //9C2 -> 9 * 8 / 2 * 1 -> 36
    
    //1. 난쟁이 키 입력
    vector<int> a(9);
    
    int n = 9;
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum += a[i];
    }
    
    sort(a.begin(), a.end());
    
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if (sum - a[i] - a[j] == 100) {
                for(int k=0;k<n;k++) {
                    if (i==k || j==k) continue;
                    cout<<a[k]<<'\n';
                }
                
                return 0;
            }
        }
    }
    
    return 0;
}