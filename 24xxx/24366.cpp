#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  cout << (k - 1) - (n - k) % (k - 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}