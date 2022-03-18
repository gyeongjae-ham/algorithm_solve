//
// Created by 함경재 on 2022/03/17.
//

#include <bits/stdc++.h>

using namespace std;
string dopa = "amumu is best";
int main() {
    cout << dopa << "\n";
        if(dopa.find("amumu") != string::npos){
            cout << "dopa 속에 아무무 있다\n";
        }
    cout << dopa.substr(0, 3) << "\n";
    reverse(dopa.begin(), dopa.end());
    cout << dopa << "\n";

    return 0;
}