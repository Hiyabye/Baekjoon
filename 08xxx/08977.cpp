#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, b; cin >> n >> k >> b; b--;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  for (int i=b; i<b+k; i++) {
    ans += v[i % n];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}