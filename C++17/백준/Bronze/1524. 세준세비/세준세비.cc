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

  sort(S_Vector.begin(), S_Vector.end());
  sort(B_Vector.begin(), B_Vector.end());

  while (min(S_Vector.size(), B_Vector.size()) > 0) {
    if (S_Vector[0] > B_Vector[0]) {
      B_Vector.erase(B_Vector.begin());
    } else if (S_Vector[0] < B_Vector[0]) {
      S_Vector.erase(S_Vector.begin());
    } else if (S_Vector[0] == B_Vector[0]) {
      B_Vector.erase(B_Vector.begin());
    }
  }

  if (S_Vector.size() > 0) {
    return 'S';
  } else if (B_Vector.size() > 0) {
    return 'B';
  } else {
    return 'C';
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