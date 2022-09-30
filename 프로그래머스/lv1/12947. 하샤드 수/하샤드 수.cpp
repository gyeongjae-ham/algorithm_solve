#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int a=0;
    string s = to_string(x);
    for(auto b:s){
        a += b-'0';
    }

    if(x%a==0) answer=true;
    return answer;
}