#include <algorithm>
#include <iostream>
#include <string>
#define max(a, b) a > b ? a : b;
using namespace std;

char wargame() {
  int S;
  int B;
  int temp;
  cin >> S >> B;

  vector<int> S_Vector;
  vector<int> B_Vector;

  for (int i = 0; i < S; i++) {
    cin >> temp;
    S_Vector.push_back(temp);
  }
  for (int i = 0; i < B; i++) {
    cin >> temp;
    B_Vector.push_back(temp);
  }

  int max_S = *max_element(S_Vector.begin(), S_Vector.end());
  int max_B = *max_element(B_Vector.begin(), B_Vector.end());

  if (max_S < max_B) {
    return 'B';
  } else {
    return 'S';
  }
}

int main() {
  int n;
  int count = 0;
  cin >> n;
  while (n > count) {
    cout << wargame() << endl;
    count++;
  }
  return 0;
}