#include <iostream>
#include <vector>
using namespace std;

int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};

inline bool check(const vector<vector<char>> &v, int y, int x) {
  for (int i=0; i<8; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny < 0 || ny >= 5 || nx < 0 || nx >= 5) continue;
    if (v[ny][nx] == 'k') return false;
  }
  return true;
}

bool solve(void) {
  vector<vector<char>> v(5, vector<char>(5));
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  for (int i=0; i<5; i++) for (int j=0; j<5; j++) {
    if (v[i][j] != 'k') continue;
    if (!check(v, i, j)) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "valid" : "invalid") << "\n";
  return 0;
}