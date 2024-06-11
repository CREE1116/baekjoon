#include <algorithm>
#include <iostream>

using namespace std;
class Map {
 private:
  int row, col;
  int* countRow;
  int* countCol;

 public:
  Map(int row, int col) {
    this->row = row;
    this->col = col;
    countRow = new int[row]();
    countCol = new int[col]();
  }

  void setMap(int rowNum, int colNum, char ch) {
    if (ch == 'X') {
      countRow[rowNum] = 1;
      countCol[colNum] = 1;
    }
  }

  int countEmptyRow() {
    int count = 0;
    for (int i = 0; i < row; i++) {
      if (countRow[i] == 0) count++;
    }
    return count;
  }

  int countEmptyCol() {
    int count = 0;
    for (int i = 0; i < col; i++) {
      if (countCol[i] == 0) count++;
    }
    return count;
  }
};
int main() {
  int row, col;
  char temp;
  cin >> row >> col;
  Map map(row, col);

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> temp;
      map.setMap(i, j, temp);
    }
  }

  cout << max(map.countEmptyRow(), map.countEmptyCol()) << endl;
  return 0;
}