#include <iostream>
using namespace std;

bool isLucky(int num) {
    // 숫자가 4와 7로만 이루어졌는지 확인하는 함수
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) return false;
        num /= 10;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    // N부터 1까지 차례로 내려가면서 4와 7로만 이루어진 숫자를 찾음
    for (int i = N; i >= 4; --i) {
        if (isLucky(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}