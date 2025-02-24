#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long c = 0, d = 0;
  while (n--) {
    long long a, b; cin >> a >> b;
    c = max(c, min(a, b));
    d = max(d, max(a, b));
  }
  cout << c * d;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}