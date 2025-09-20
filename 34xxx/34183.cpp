#include <iostream>
using namespace std;

void solve(void) {
  int n, m, a, b; cin >> n >> m >> a >> b;

  cout << (3 * n > m ? (3 * n - m) * a + b : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}