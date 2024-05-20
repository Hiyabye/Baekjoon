#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k; n--;

  while (n--) k >>= 1;
  cout << k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}