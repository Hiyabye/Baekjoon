#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c; r--; c--;
  vector<vector<bool>> v(10, vector<bool>(10, true));
  for (int i=0; i<10; i++) for (int j=0; j<10; j++) {
    char ch; cin >> ch;
    if (ch == 'x') continue;
    for (int k=0; k<10; k++) v[i][k] = false;
    for (int k=0; k<10; k++) v[k][j] = false;
  }

  int ans = 1e9;
  for (int i=0; i<10; i++) for (int j=0; j<10; j++) {
    if (!v[i][j]) continue;
    ans = min(ans, abs(r-i) + abs(c-j));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}