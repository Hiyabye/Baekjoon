#include <iostream>
using namespace std;

void solve(void) {
  int a, k; cin >> a >> k;

  cout << (a & 1 || !k ? a : 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}