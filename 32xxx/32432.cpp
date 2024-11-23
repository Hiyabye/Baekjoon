#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;

  cout << (k - n + 1) / n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}