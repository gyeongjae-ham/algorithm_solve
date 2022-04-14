#include <bits/stdc++.h>
using namespace std;

vector<int> era(int s, int f){ 
    
    bool che[f+1]={1,};
    fill_n(che, f+1, 1);
    che[0] = false;
    che[1] = false;
    
    vector<int> res;

    for(int i = 2; i <= f; i++){ 
        if(che[i]==0) continue; 
        for(int j=2*i; j<=f; j+=i){
            che[j] = false; 
        }
    }
    
    for (int i = s; i <= f; i++)
        if(che[i] == true)
              res.push_back(i);
    
    return res;
}

int main() {
    int min, max;
    cin>>min>>max;
    
    vector<int> res = era(min, max);
    
    for(int i : res) {
        cout<<i<<"\n";
    }
    return 0;
}

