#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int y = 0;
  vector<int> a(366, 0), b(366, 0);
  while (n--) {
    char c; int s, e; cin >> c >> s >> e; s--; e--;
    if (c == 'T') for (int i=s; i<=e; i++) a[i]++;
    else          for (int i=s; i<=e; i++) b[i]++;
    y = max(y, e - s + 1);
  }

  int p = 0, q = 0, r = 0, x = 0;
  for (int i=0; i<366; i++) {
    if (a[i] + b[i]) p++;
    q = max(q, a[i] + b[i]);
    if (a[i] && b[i] && a[i] == b[i]) {
      r++;
      x = max(x, a[i] + b[i]);
    }
  }
  cout << p << "\n" << q << "\n" << r << "\n" << x << "\n" << y;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}