#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int r; cin >> r;
  if (r == 0) return false;
  vector<int> m(r), l(r);
  for (int i=0; i<r; i++) cin >> m[i];
  for (int i=0; i<r; i++) cin >> l[i];

  bool flag = true;
  int a = m[0], b = l[0];
  if (r > 1) a += m[1], b += l[1];
  for (int i=2; i<r; i++) {
    a += m[i], b += l[i];
    bool c = m[i] == m[i-1] && m[i] == m[i-2];
    bool d = l[i] == l[i-1] && l[i] == l[i-2];
    if (c && d) flag = false;
    if (flag && c ^ d) {
      if (c) a += 30;
      else b += 30;
      flag = false;
    }
  }
  cout << (a > b ? 'M' : a < b ? 'L' : 'T') << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}