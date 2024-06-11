#include <iostream>
#include <string>
using namespace std;

long digitMultiple(string num) {
  long ans = 1;
  for (int i = 0; i < num.length(); i++) {
    ans *= num[i] - '0';
  }
  return ans;
}

int main() {
  string num;
  cin >> num;

  for (int i = 1; i < num.length(); i++) {
    // cout << num.substr(0, i) << "--" << num.substr(i, num.length() - 1) <<
    // endl;
    if (digitMultiple(num.substr(0, i)) ==
        digitMultiple(num.substr(i, num.length() - 1))) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}