#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> a(n);
  for (int i=0; i<n; i++) {
    int p, l; cin >> p >> l;
    vector<int> b(p);
    for (int j=0; j<p; j++) cin >> b[j];
    sort(b.begin(), b.end(), greater<int>());
    a[i] = (p < l) ? 1 : b[l-1];
  }
  sort(a.begin(), a.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (m < a[i]) break;
    m -= a[i];
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}