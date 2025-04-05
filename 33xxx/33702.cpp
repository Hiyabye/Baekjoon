#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;

  cout << (k & 1 ? 8 : 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}