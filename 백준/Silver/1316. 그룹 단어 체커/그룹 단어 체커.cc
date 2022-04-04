// 1. 단어의 n번째 문자가 n-1번째 문자와 같지 않고(연속하지 않고),
// 2. n번째 문자에 해당하는 배열 값이 true 라면(이미 나왔던 문자라면),
// 3. 불연속한 문자가 있다고 판단. 그룹단어가 아니라고 판단
#include <bits/stdc++.h>
using namespace std;
int N;
string word;

int main() {
    cin>>N;
    int count=0;
    
    for(int i=0; i<N; i++) {
        cin>>word;
        bool ap[26] = {false, };
        ap[(int)(word[0])-97]=true;
        
        for(int j=1; j<word.size(); j++) {
            if(word[j]==word[j-1]) {
                continue;
            }
            else if(word[j]!=word[j-1] && ap[((int)(word[j])-97)]==true) {
                count++;
                break;
            }
            else {
                ap[((int)(word[j])-97)]=true;
            }
        }
    }
    cout<<N-count;
    return 0;
}