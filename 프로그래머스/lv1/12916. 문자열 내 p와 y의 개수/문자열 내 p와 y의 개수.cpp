#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pc=0, yc=0;
    for(int i=0;i<s.size();i++){
        s[i] = tolower(s[i]);
    }
    for(auto a:s){
        if(a=='p') pc++;
        else if(a=='y') yc++;
    }
    
    if(pc!=yc) answer=false;

    return answer;
}