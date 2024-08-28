#include <iostream>
#include <vector>
using namespace std;

inline bool one(const vector<vector<int>> &v, int y, int x) {
  if (y > 0 && v[y-1][x] == v[y][x]) return false;
  int cnt = 1;
  for (int i=y+1; i<19 && v[i][x] == v[y][x]; i++) cnt++;
  return cnt == 5;
}

inline bool two(const vector<vector<int>> &v, int y, int x) {
  if (x > 0 && v[y][x-1] == v[y][x]) return false;
  int cnt = 1;
  for (int i=x+1; i<19 && v[y][i] == v[y][x]; i++) cnt++;
  return cnt == 5;
}

inline bool three(const vector<vector<int>> &v, int y, int x) {
  if (y > 0 && x > 0 && v[y-1][x-1] == v[y][x]) return false;
  int cnt = 1;
  for (int i=y+1, j=x+1; i<19 && j<19 && v[i][j] == v[y][x]; i++, j++) cnt++;
  return cnt == 5;
}

inline bool four(const vector<vector<int>> &v, int y, int x) {
  if (y < 18 && x > 0 && v[y+1][x-1] == v[y][x]) return false;
  int cnt = 1;
  for (int i=y-1, j=x+1; i>=0 && j<19 && v[i][j] == v[y][x]; i--, j++) cnt++;
  return cnt == 5;
}

void solve(void) {
  vector<vector<int>> v(19, vector<int>(19));
  for (int i=0; i<19; i++) for (int j=0; j<19; j++) cin >> v[i][j];

  for (int i=0; i<19; i++) for (int j=0; j<19; j++) {
    if (!v[i][j]) continue;
    if (one(v, i, j) || two(v, i, j) || three(v, i, j) || four(v, i, j)) {
      cout << v[i][j] << "\n" << i+1 << " " << j+1;
      return;
    }
  }
  cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}