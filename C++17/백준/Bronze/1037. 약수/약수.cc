#include <algorithm>
#include <iostream>

using namespace std;
int main() {
  int count;
  cin >> count;
  long* arr = new long[count];
  for (int i = 0; i < count; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + count);
  if (count % 2 == 1) {
    cout << arr[count / 2] * arr[count / 2] << endl;
  } else {
    cout << (arr[count / 2] * arr[count / 2 - 1]) << endl;
  }
}