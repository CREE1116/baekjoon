#include <iostream>
#include <string>

using namespace std;

string rev(string num) {
  // 순서 반전
  string temp = "";
  for (int i = num.length() - 1; i >= 0; i--) {
    temp += num[i];
  }
  return temp;
}

int main() {
  string num1, num2;
  cin >> num1 >> num2;
  cout << stoi(rev(to_string(stoi(rev(num1)) + stoi(rev(num2))))) << endl;
  return 0;
}