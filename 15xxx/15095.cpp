#include <iostream>
#include <vector>
using namespace std;

int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};

bool solve(void) {
  vector<vector<char>> v(5, vector<char>(5));
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  int cnt = 0;
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) {
    if (v[i][j] == '.') continue;
    for (int k=0; k<8; k++) {
      int ny = i + dy[k], nx = j + dx[k];
      if (ny < 0 || ny >= 5 || nx < 0 || nx >= 5) continue;
      if (v[ny][nx] == 'k') return false;
    }
    cnt++;
  }
  return cnt == 9;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "valid" : "invalid");
  return 0;
}