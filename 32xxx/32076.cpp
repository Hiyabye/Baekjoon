#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};

inline bool valid(int y, int x) {
  return 0 <= y && y < 3 && 0 <= x && x < 3;
}

inline string make(char a, char b, char c) {
  return string(1, a) + string(1, b) + string(1, c);
}

void solve(void) {
  vector<vector<char>> v(3, vector<char>(3));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  string ans = "CCC";
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    for (int k=0; k<8; k++) {
      if (!valid(i+dy[k], j+dx[k])) continue;
      for (int l=0; l<8; l++) {
        if (!valid(i+dy[k]+dy[l], j+dx[k]+dx[l])) continue;
        if (dy[k] == -dy[l] && dx[k] == -dx[l]) continue;
        ans = min(ans, make(v[i][j], v[i+dy[k]][j+dx[k]], v[i+dy[k]+dy[l]][j+dx[k]+dx[l]]));
      }
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}