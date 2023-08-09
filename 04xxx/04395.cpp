#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int x, y;
  cin >> x >> y;

  if (x == y) {
    cout << "0\n";
    return;
  }

  int d = sqrt(y-x);
  if (y-x > d*d+d) cout << 2*d+1 << "\n";
  else if (y-x > d*d) cout << 2*d << "\n";
  else cout << 2*d-1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    solve();
  }
  return 0;
}