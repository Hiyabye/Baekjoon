#include <iostream>
using namespace std;

int calc(int n, int m) {
  if (n % 2 == 0 || m % 2 == 0) return 0;
  return 1 + 4 * calc(n / 2, m / 2);
}

void solve(void) {
  int n, m; cin >> n >> m;

  cout << calc(n, m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}