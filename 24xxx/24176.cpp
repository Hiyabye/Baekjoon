#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

inline int c2i(char c) { return c - '0'; }

bool solve(void) {
  int h, w; cin >> h >> w;
  if (h == 0 && w == 0) return false;
  vector<vector<char>> v(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> v[i][j];

  double a = 0, b = 0, c = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    a += c2i(v[i][j]);
    b += c2i(v[i][j]) * i;
    c += c2i(v[i][j]) * j;
  }
  cout << fixed << setprecision(7) << b / a + 1 << " " << c / a + 1 << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}