#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;

  cout << min(m, k) + min(n-m, n-k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}