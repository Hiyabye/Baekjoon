#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, l; cin >> n >> l;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0, cur = 0;
  for (int i=0; i<l; i++) {
    cur += a[i];
    ans += 129 <= cur && cur <= 138;
  }

  for (int i=l; i<n; i++) {
    cur += a[i] - a[i-l];
    ans += 129 <= cur && cur <= 138;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}