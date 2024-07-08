#include <iostream>

using namespace std;

bool broken[10];

int check(int c) {
    // 이동하려는 채널의 숫자버튼이 고장나지 않았으면 그 버튼을 눌러야 하므로
    // len에 담아준다
    
    // 이동하려는 채널이 0일 경우
    // 0일 때 return 값을 처리해줘야 하므로 예외처리
    if (c == 0) {
        if (broken[0]) return 0;
        else return 1;
    }
    
    // 여기서 0보다 클때까지 반복문이 도니까 이동하려는 채널이 0일 때 계산이 안돼서
    // 위에서 예외 처리한다
    int len = 0;
    while (c > 0) {
        // 고장난 버튼이면 
        if (broken[c % 10]) return 0;
        // 고장난 버튼이 아니면
        len++;
        c /= 10;
    }
    
    return len;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 숫자를 입력 후 +, - 입력하다가 숫자를 입력하면 앞선 누른 것들은 의미가 없어진다
    // - 를 누르다가 + 누르는것도 채널 이동의 중복이 발생하므로 절대 최소값이 될 수 없다
    // 따라서 숫자를 입력후, - or + 중 하나만 연속해서 눌러야 한다
    // 최악으로 1부터 50까지 눌러도 50만번이 최소가 되므로, - 50만까지 생각해서 범위는 무한대의 채널수가 아닌
    // 100만까지로 대략 생각해도 된다
    
    // 이동할 수 있는 채널 숫자 개수에 차이(+ or - 눌러야 하는 횟수)를 더해서 최소값을 찾는다
    
    //1. 이동 채널 n
    int n;
    cin>>n;
    //2. 고장 버튼 수
    int t;
    cin>>t;
    //3. 고장 버튼 입력
    for(int i=0;i<t;i++) {
        int x;
        cin>>x;
        broken[x] = true;
    }
    
    // 초기값 처음 위치가 100이므로
    int ans = n - 100;
    if (ans < 0) ans = -ans;
    
    for (int i = 0; i <= 1000000; i++) {
        int c = i;
        // 고장 안난 버튼 수 계산
        int len = check(c);
        // +, - 버튼 눌러야 하는 횟수 계산
        if (len > 0) {
            int tmp = c - n;
            if (tmp < 0) tmp = -tmp;
        
            if (ans > len + tmp) ans = len + tmp;    
        }
    }
    
    cout<<ans<<'\n';
    
    return 0;
}