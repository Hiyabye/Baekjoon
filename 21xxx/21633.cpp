#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;

  k += 2500;
  if (k < 10000) k = 10000;
  if (k > 200000) k = 200000;
  cout << k / 100 << ".";
  if (k % 100 < 10) cout << "0";
  cout << k % 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}