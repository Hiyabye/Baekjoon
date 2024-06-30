#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  long long n, m, a, k; cin >> n >> m >> a >> k;

  cout << min(n, a-k+1) << " " << (m+a-k-1)/m+1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}