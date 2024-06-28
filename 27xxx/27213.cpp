#include <iostream>
using namespace std;

void solve(void) {
  long long m, n; cin >> m >> n;

  cout << (m > 1 && n > 1 ? 2*(m+n-2) : m*n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}