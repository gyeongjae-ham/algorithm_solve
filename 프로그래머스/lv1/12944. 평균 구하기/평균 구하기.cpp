#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum=0;
    for (int i=0;i<arr.size();i++){
        sum+=(double) arr[i];
    }
    answer = sum / arr.size();
    return answer;
}