#include <iostream>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  cout << (n+k-m-1) / (k-m);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}