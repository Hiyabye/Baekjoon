#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int ca, ba, pa; cin >> ca >> ba >> pa;
  int cr, br, pr; cin >> cr >> br >> pr;

  cout << max(0, cr-ca) + max(0, br-ba) + max(0, pr-pa);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}