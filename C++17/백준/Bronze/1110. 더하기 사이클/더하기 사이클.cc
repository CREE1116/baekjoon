#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  int temp;
  int count = 0;
  cin >> a;
  if (a < 10) {
    a = a * 10;
  }
  temp = a;
 // cout << temp << endl;

  while (1) {
    b = temp / 10;
    c = temp % 10;
    temp = c * 10 + (b + c) % 10;
    count++;
    if (a == temp) break;
   // cout << count << ":: a = " << a << "temp = " << temp << endl;
  }
  cout << count << endl;
  return 0;
}