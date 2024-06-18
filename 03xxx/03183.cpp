#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> days = {
  {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
  {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31}
};

inline bool leap(int y) {
  return !(y % 4) && (y % 100 || !(y % 400));
}

inline bool check(int d, int m, int y) {
  return m >= 1 && m <= 12 && d >= 1 && d <= (m == 2 ? 28 + leap(y) : days[m]);
}

bool solve(void) {
  int d, m, y; cin >> d >> m >> y;
  if (d == 0 && m == 0 && y == 0) return false;

  cout << (check(d, m, y) ? "Valid" : "Invalid") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}