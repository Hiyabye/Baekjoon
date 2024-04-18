#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;

  cout << max({min(a1, a2) * min(a3, a4), min(a1, a3) * min(a2, a4), min(a1, a4) * min(a2, a3)});
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}