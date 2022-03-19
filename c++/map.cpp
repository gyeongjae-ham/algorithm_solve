//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>

using namespace std;
int v[10];
int main() {
    unordered_map<string, int> umap;

    umap.insert({"test1",1 }); // 이렇게 넣기도 하고
    umap.emplace("test5", 5); // 이렇게도 넣을 수 있다
    umap["test1"]=4; // 이렇게 변경 또는 추가도 가능하다 이 방식을 제일 권장한다

    for (auto element: umap) {
        cout << element.first << " :: " << element.second << '\n';
    }


    // map의 find 메소드는 찾지 못하면 end() 이터레이터를 반환한다
    auto search = umap.find("test1"); // search에는 포인터가 담긴다
    if (search != umap.end()) {
        // pointer에서 값을 빼는 첫번째 방법 (pointer_name) -> (객체에서 빼내려는 변수명)
        // pointer에서 값을 빼는 두번째 방법 (*pointer).(빼내려는 변수명)
        cout << "found :" << search->first  << " " << (*search).second << '\n';
    } else {
        cout << "not found.." << "\n";
    }


    // 이런식으로 바로 int형을 증가시킬 수 있다
    umap["test1"]++;
    cout << umap["test1"] << "\n";

    cout << umap.size() << "\n";
    umap.erase("test1");
    cout << umap.size() << "\n";

    return 0;
}