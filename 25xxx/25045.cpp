#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  long long ans = 0, sum = 0;
  for (int i=n-1, j=0; i>=0 && j<m; i--, j++) {
    sum += a[i] - b[j];
    ans = max(ans, sum);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}