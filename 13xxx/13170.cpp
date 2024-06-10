#include <iostream>
using namespace std;

void solve(void) {
  int n, k, p, w; cin >> n >> k >> p >> w;

  cout << (p + w - 1) / w;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}