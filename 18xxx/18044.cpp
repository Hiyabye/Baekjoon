#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> l(n);
  for (int i=0; i<n; i++) cin >> l[i];
  sort(l.begin(), l.end(), greater<long long>());

  int idx = 0;
  long long ans = accumulate(l.begin(), l.end(), 0LL);
  while (idx < n && l[idx] >= ans - l[idx]) ans -= l[idx++];
  cout << (idx == n ? 0 : ans) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int z; cin >> z;
  while (z--) solve();
  return 0;
}