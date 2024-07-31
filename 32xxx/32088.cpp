#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long b = 0, c = 0;
  while (n--) {
    long long a; cin >> a;
    b = max(b, a);
    c += a;
  }
  cout << (b > 2 * (c - b) ? c - b : c / 3);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}