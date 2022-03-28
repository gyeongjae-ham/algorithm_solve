//
// Created by 함경재 on 2022/03/28.
//
#include <bits/stdc++.h>
using namespace std;

// 왼쪽으로 90도
void rotate90Left(vector<vector<int>> &key){
    int m = key.size();
    vector<vector<int>> tmp(m, vector<int>(m, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            tmp[i][j] = key[j][m - i - 1];
        }
    }
    key = tmp;
    return;
}

void rotate90Right(vector<vector<int>> &key){
    int m = key.size();
    vector<vector<int>> tmp(m, vector<int>(m, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            tmp[i][j] = key[m - j - 1][i];
        }
    }
    key = tmp;
    return;
}
