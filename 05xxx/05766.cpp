#include <iostream>
#include <map>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;

  map<int, int> cnt;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      int x; cin >> x;
      cnt[x]++;
    }
  }

  int mx1 = 0, mx2 = 0;
  for (auto [_, v] : cnt) {
    if (v > mx1) {
      mx2 = mx1;
      mx1 = v;
    } else if (v > mx2) {
      mx2 = v;
    }
  }

  for (auto [k, v] : cnt) {
    if (v == mx2) cout << k << " ";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}