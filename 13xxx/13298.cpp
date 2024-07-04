#include <iostream>
using namespace std;

bool solve(void) {
  int l1, a1, l2, a2, lt, at;
  cin >> l1 >> a1 >> l2 >> a2 >> lt >> at;

  int x = 0, y = 0;
  for (int i=1; i<=lt/l1 && i<=at/a1; i++) {
    if ((lt-l1*i) % l2 || (at-a1*i) % a2) continue;
    int j = (lt-l1*i) / l2;
    if (j <= 0 || a1*i + a2*j != at) continue;
    if (x) return false;
    x = i, y = j;
  }
  if (!x) return false;

  cout << x << " " << y;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "" : "?") << "\n";
  return 0;
}