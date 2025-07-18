#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> x(n, 0);
  while (m--) {
    int a, b; cin >> a >> b;
    x[--a]++;
  }
  sort(x.begin(), x.end());

  long long ans = 0;
  for (int i=1; i<n; i++) {
    if (x[i] > x[i-1]) continue;
    ans += x[i-1] - x[i] + 1;
    x[i] = x[i-1] + 1;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}