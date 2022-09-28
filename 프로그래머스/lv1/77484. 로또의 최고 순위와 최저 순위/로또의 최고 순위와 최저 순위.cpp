#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int rank[] = {6,6,5,4,3,2,1};
    int cnt = 0;
    int zeros = count(lottos.begin(), lottos.end(), 0);
    
    vector<int> answer;
    
    for (auto a:lottos){
        auto res = find(win_nums.begin(), win_nums.end(), a);
        if(res!=win_nums.end()) cnt++;
    }
    
    answer.push_back(rank[cnt+zeros]);
    answer.push_back(rank[cnt]);
    
    return answer;
}