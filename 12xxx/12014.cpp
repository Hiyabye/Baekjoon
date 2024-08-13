#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<int> lis;
  for (int i=0; i<n; i++) {
    auto it = lower_bound(lis.begin(), lis.end(), a[i]);
    if (it == lis.end()) {
      lis.push_back(a[i]);
    } else {
      *it = a[i];
    }
  }
  return lis.size() >= k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) cout << "Case #" << i << "\n" << solve() << "\n";
  return 0;
}