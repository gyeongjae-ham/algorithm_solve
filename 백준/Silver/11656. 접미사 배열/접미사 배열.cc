#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 단어를 입력받는다
    string word;
    cin>>word;
    //2. 단어 길이만큼 index를 vector에 넣어준다(이 인덱스 만큼 단어 잘라서 비교하려고)
    vector<int> v;
    int n = word.size();
    for(int i=0;i<n;i++) v.push_back(i);
    //3. vector를 sort하는데 단어를 vector index 만큼 잘라서 사전 비교해서 sort한다
    // &word => &word는 외부 변수 word를 캡처하여 람다 함수 내에서 사용할 수 있도록 합니다
    sort(v.begin(), v.end(), [&word](int u, int v) {
        // strcmp는 C 스타일 문자열을 비교하는 함수로, 두 문자열을 사전순으로 비교하여 그 결과를 반환합니다
        return strcmp(word.c_str()+u, word.c_str()+v) < 0;
    });
    //4. 정렬된 vector의 index를 가지고 단어를 substr로 잘라서 출력한다
    for (auto &x: v) {
        cout<<word.substr(x)<<'\n';
    }
    return 0;
}