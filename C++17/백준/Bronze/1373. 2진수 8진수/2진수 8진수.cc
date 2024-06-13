#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string binaryToOctal(string binary) {
    // 입력된 이진수를 3자리씩 묶기 위해 앞에 0을 추가
    while (binary.length() % 3 != 0) {
        binary = '0' + binary;
    }

    string octal = "";
    // 3자리씩 묶어서 8진수로 변환
    for (size_t i = 0; i < binary.length(); i += 3) {
        int value = (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0');
        octal += to_string(value);
    }

    return octal;
}

int main() {
    string binary;
    cin >> binary;

    string octal = binaryToOctal(binary);
    cout << octal << endl;
}
