#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  while (m--) {
    int op; cin >> op;
    if (op == 1) {
      long long k; cin >> k;
      cout << distance(lower_bound(a.begin(), a.end(), k), a.end()) << "\n";
    } else if (op == 2) {
      long long k; cin >> k;
      cout << distance(upper_bound(a.begin(), a.end(), k), a.end()) << "\n";
    } else if (op == 3) {
      long long i, j; cin >> i >> j;
      cout << distance(lower_bound(a.begin(), a.end(), i), upper_bound(a.begin(), a.end(), j)) << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}