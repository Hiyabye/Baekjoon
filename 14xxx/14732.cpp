#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<bool>> v(501, vector<bool>(501, false));
  while (n--) {
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    for (int x=x1; x<x2; x++) for (int y=y1; y<y2; y++) {
      v[x][y] = true;
    }
  }

  int ans = 0;
  for (int x=0; x<=500; x++) for (int y=0; y<=500; y++) {
    if (v[x][y]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}