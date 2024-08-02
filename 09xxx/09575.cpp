#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

inline bool check(int x) {
  while (x) {
    if (x % 10 != 5 && x % 10 != 8) return false;
    x /= 10;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m);
  for (int i=0; i<m; i++) cin >> b[i];
  int k; cin >> k;
  vector<int> c(k);
  for (int i=0; i<k; i++) cin >> c[i];

  unordered_set<int> ans;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) for (int l=0; l<k; l++) {
    if (check(a[i] + b[j] + c[l])) ans.insert(a[i] + b[j] + c[l]);
  }
  cout << ans.size() << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}