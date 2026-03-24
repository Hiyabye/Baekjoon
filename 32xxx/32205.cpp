#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n);
  for (int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i];

  unordered_set<int> s;
  for (int i=0; i<n; i++) {
    if (s.find(a[i]) != s.end()) return true;
    else s.insert(a[i]);
    if (s.find(b[i]) != s.end()) return true;
    else s.insert(b[i]);
    if (s.find(c[i]) != s.end()) return true;
    else s.insert(c[i]);
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
