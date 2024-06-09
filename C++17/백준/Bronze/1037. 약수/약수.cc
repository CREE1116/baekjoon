#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  int count;
  cin >> count;
  long min, max, temp;
  ;
  for (int i = 0; i < count; i++) {
    cin >> temp;
    if (i == 0) {
      min = temp;
      max = temp;
    } else {
      if (min > temp) min = temp;
      if (max < temp) max = temp;
    }
  }
  cout << min * max << endl;
}
