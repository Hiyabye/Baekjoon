#include <iostream>
using namespace std;

void solve(void) {
  int k, n; cin >> k >> n;

  cout << n + 1 << " " << k * n + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}