#include <bits/stdc++.h>

using namespace std;

int n, v, num;
vector<int> nums;

int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        nums.push_back(num);
    }
    cin>>v;
    int cnt = count(nums.begin(), nums.end(), v);
    cout<<cnt;
    return 0;
}