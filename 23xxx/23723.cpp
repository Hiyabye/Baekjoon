#include <iostream>
#include <vector>
using namespace std;

inline void calc(int w, int h, vector<vector<bool>> &v, int x, int y) {
  for (int i=0; i<w; i++) for (int j=0; j<h; j++) {
    if (i == x || j == y) continue;
    v[i][j] = v[i][j] || (v[i][y] && v[x][j]);
  }
}

inline bool check(int w, int h, const vector<vector<bool>> &v) {
  for (int i=0; i<w; i++) for (int j=0; j<h; j++) {
    if (!v[i][j]) return false;
  }
  return true;
}

bool solve(void) {
  int w, h; cin >> w >> h;
  if (w == 0 && h == 0) return false;

  vector<vector<bool>> v(w, vector<bool>(h, false));
  for (int i=0; i<w+h-1; i++) {
    int x, y, n; cin >> x >> y >> n; x--; y--;
    v[x][y] = true;
  }

  for (int i=0; i<w; i++) for (int j=0; j<h; j++) {
    if (!v[i][j]) continue;
    calc(w, h, v, i, j);
  }
  
  cout << (check(w, h, v) ? "YES" : "NO") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}