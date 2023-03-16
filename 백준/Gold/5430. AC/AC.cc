#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

void parse(string& tmp, deque<int>& d) {
    int cur = 0;
    for(int i=1;i+1<tmp.size(); i++) {
        if(tmp[i]==','){
            d.push_back(cur);
            cur=0;
        }
        else {
            cur = 10*cur + (tmp[i]-'0');
            // 입력값이 두 자리일 경우를 대비해서
        }
    }
    if(cur!=0) d.push_back(cur);
}

void print_result(deque<int>& d) {
    cout<<'[';
    for(int i=0;i<d.size();i++){
        cout<<d[i];
        if(i+1!=d.size()) cout<<',';
    }
    cout<<"]\n";
}

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin>>t;
    
    while(t--) {
        deque<int> d;
        int rev=0;
        int n;
        bool isWrong = false;
        string query, tmp;
        cin>>query;
        cin>>n;
        cin>>tmp;
        parse(tmp, d);
        for(auto c: query){
            if (c=='R') rev = 1-rev;
            else {
                if(d.empty()) {
                    // error situation
                    isWrong = true;
                    break;
                }
                if(!rev) d.pop_front(); // if don't reverse before
                else d.pop_back(); // reverse before
            }
        }
        
        if(isWrong) cout<<"error\n";
        else {
            // if rev is true do reverse
            if (rev) reverse(d.begin(), d.end());
            print_result(d);
        }
    }
}