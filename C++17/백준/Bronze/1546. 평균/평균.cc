
#include <iostream>
using namespace std;

int main() {
  int count = 0;
  float sum = 0;
  float max = 0;
  cin >> count;
  for (int i = 0; i < count; i++) {
    int temp;
    cin >> temp;
    sum += temp;
    if (temp > max) max = temp;
  }
  cout << ((sum / max) * 100) / count << endl;

  return 0;
}