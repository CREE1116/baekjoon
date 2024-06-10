#include <iostream>

using namespace std;

int main() {
  int arr[5];
  int check = 0;
  int count = 1;
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  while (1) {
    for (int i = 0; i < 5; i++) {
      if (count % arr[i] == 0) check++;
    }
    if (check > 2) {
      cout << count;
      break;
    }
    check = 0;
    count++;
  }
}