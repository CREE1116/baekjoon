
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  while (1) {
    string num;
    bool check = false;
    cin >> num;
    if (num[0] == '0') break;
    for (int i = 0; i < num.length() / 2; i++) {
      if (num[i] != num[num.length() - i - 1]) {
        cout << "no" << endl;
        check = true;
        break;
      }
    }
    if (!check) cout << "yes" << endl;
    check = false;
  }
  return 0;
}