#include <iostream>
#include <utility>
using namespace std;

inline int diag(const pair<int, int> &a) {
  return a.first * a.first + a.second * a.second;
}

inline bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
  if (diag(a) != diag(b)) return diag(a) < diag(b);
  return a.first < b.first;
}

bool solve(void) {
  int h, w; cin >> h >> w;
  if (h == 0 && w == 0) return false;

  pair<int, int> ans = {100, 100};
  for (int i=1; i<=150; i++) {
    for (int j=i+1; j<=150; j++) {
      if (diag({i, j}) < diag({h, w}) || (diag({i, j}) == diag({h, w}) && i <= h)) continue;
      if (cmp({i, j}, ans)) ans = {i, j};
    }
  }
  cout << ans.first << " " << ans.second << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}