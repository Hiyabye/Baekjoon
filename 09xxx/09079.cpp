#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool calc(vector<vector<char>> a, int mask) {
  for (int i=0; i<3; i++) {
    if (mask & (1 << i)) continue;
    for (int j=0; j<3; j++) {
      a[i][j] = (a[i][j] == 'H' ? 'T' : 'H');
    }
  }
  for (int j=0; j<3; j++) {
    if (mask & (1 << (j+3))) continue;
    for (int i=0; i<3; i++) {
      a[i][j] = (a[i][j] == 'H' ? 'T' : 'H');
    }
  }
  if (mask & (1 << 6)) {
    for (int i=0; i<3; i++) {
      a[i][i] = (a[i][i] == 'H' ? 'T' : 'H');
    }
  }
  if (mask & (1 << 7)) {
    for (int i=0; i<3; i++) {
      a[i][2-i] = (a[i][2-i] == 'H' ? 'T' : 'H');
    }
  }
  int cnt = 0;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      if (a[i][j] == 'H') cnt++;
    }
  }
  return cnt == 0 || cnt == 9;
}

void solve(void) {
  vector<vector<char>> a(3, vector<char>(3));
  for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >> a[i][j];

  int ans = 1e9;
  for (int mask=0; mask<(1<<8); mask++) {
    if (calc(a, mask)) {
      ans = min(ans, __builtin_popcount(mask));
    }
  }
  cout << (ans == 1e9 ? -1 : ans) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}