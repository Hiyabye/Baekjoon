#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> l(n), r(n);
  for (int i=0; i<n; i++) cin >> l[i] >> r[i];

  for (int i=0; i<n; i++) {
    if (l[i] > n || r[i] > n || l[i] + r[i] != n) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "yes" : "no") << "\n";
  return 0;
}