#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  long long ans = 0;
  for (int mask=1; mask<(1<<30); mask<<=1) {
    long long cnt = 0;
    for (int x : v) if (x & mask) cnt++;
    ans += cnt * (n - cnt) * mask;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}