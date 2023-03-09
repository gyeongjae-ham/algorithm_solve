#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int nums[21];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=1; i<21; i++){
        nums[i] = i;
    }
    
    for(int i=0;i<10;i++){
        int a,b;
        cin>>a>>b;
        
        reverse(nums+a, nums+b+1);
    }
    
    for(int i=1;i<21;i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}