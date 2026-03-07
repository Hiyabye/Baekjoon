#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

bool solve(void) {
  int m; cin >> m;
  vector<string> a(m);
  for (int i=0; i<m; i++) cin >> a[i];
  int n; cin >> n;
  vector<string> b(n);
  for (int i=0; i<n; i++) cin >> b[i];

  unordered_set<string> s(a.begin(), a.end());
  for (int i=0; i<n; i++) {
    if (s.find(b[i]) == s.end()) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}