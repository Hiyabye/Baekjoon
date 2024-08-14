#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int p, n; cin >> p >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int ans = 0;
  while (p < 200 && ans < n) {
    p += a[ans++];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}