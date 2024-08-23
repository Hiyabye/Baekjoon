#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<vector<bool>> &v, int y, int x, int h, int w) {
  for (int i=y; i<y+h; i++) for (int j=x; j<x+w; j++) {
    if (!v[i][j]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  vector<vector<bool>> v(101, vector<bool>(101, false));
  while (n--) {
    int a, b; cin >> a >> b;
    for (int y=a; y<a+10; y++) for (int x=b; x<b+10; x++) {
      v[y][x] = true;
    }
  }

  int ans = 0;
  for (int y=1; y<=100; y++) for (int x=1; x<=100; x++) {
    for (int h=1; y+h<=100; h++) for (int w=1; x+w<=100; w++) {
      if (h * w <= ans) continue;
      if (check(v, y, x, h, w)) ans = h * w;
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