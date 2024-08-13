#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  unordered_set<int> s;
  for (int i=0; i<m; i++) {
    int x; cin >> x;
    s.insert(x);
  }

  int ans = 0;
  for (int i=0; i<m; i++) {
    if (s.find(v[i]) == s.end()) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}