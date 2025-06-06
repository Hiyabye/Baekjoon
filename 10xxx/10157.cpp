#include <iostream>
#include <vector>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

inline bool valid(int r, int c, int y, int x) {
  return 0 <= y && y < r && 0 <= x && x < c;
}

void solve(void) {
  int c, r; cin >> c >> r;
  int k; cin >> k;

  vector<vector<int>> v(r, vector<int>(c, 0));
  for (int i=1, y=r-1, x=0, d=0; i<=r*c; i++) {
    v[y][x] = i;
    if (i == k) { cout << x+1 << " " << r-y; return; }
    if (!valid(r, c, y+dy[d], x+dx[d]) || v[y+dy[d]][x+dx[d]]) {
      d = (d + 1) % 4;
    }
    y += dy[d]; x += dx[d];
  }
  cout << 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}