#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, vector<int>> mp = {
  {1, {0, 0, 0, 2, -1, 0, 2, 0, 0, 3, 2, 1, 0}},
  {2, {0, 1, 0, 0, -8, 0, 4, 3, 2, 0, 2, 3, 3}},
  {3, {0, 0, 0, 1, -1, 0, -2, 3, 0, 0, 1, 1, 0}},
  {4, {0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 1, 1, 0}},
  {5, {0, 1, 1, 0, 0, 0, 0, 6, 4, 0, 1, 0, 1}}
};

void solve(void) {
  int r; char c; cin >> r >> c;

  if (c == 'E') cout << "No " << abs(mp[r][c-'A']) << "\n";
  else if (c == 'G') cout << (mp[r][c-'A'] > 0 ? "Yes" : "No") << " " << abs(mp[r][c-'A']) << "\n";
  else cout << (mp[r][c-'A'] >= 0 ? "Yes" : "No") << " " << abs(mp[r][c-'A']) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int q; cin >> q;
  while (q--) solve();
  return 0;
}