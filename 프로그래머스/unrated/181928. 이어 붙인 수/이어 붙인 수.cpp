#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int ans = 0;
    int eres = 0;
    int ores = 0;
    for(int i=0; i<num_list.size(); i++) {
        if(num_list[i] % 2 == 0) {
            eres *= 10;
            eres += num_list[i];
        }
        else {
            ores *= 10;
            ores += num_list[i];
        }
    }
    
    ans = eres + ores;
    return ans;
}