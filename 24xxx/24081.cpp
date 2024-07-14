#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  unordered_set<int> s;
  for (int i=0; i<m; i++) s.insert(b[i]);

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (s.find(a[i]) != s.end()) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}