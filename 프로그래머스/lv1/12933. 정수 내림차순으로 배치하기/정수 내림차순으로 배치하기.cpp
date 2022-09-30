#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> v;

long long solution(long long n) {  
    string answer = "";
    string s = to_string(n);
    for(auto a:s){
        v.push_back(a-'0');
    }
    sort(v.rbegin(), v.rend());
    for(int i=0;i<v.size();i++){
        answer+=to_string(v[i]);
    }
    return stoll(answer);
}