#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> a, b;
map<int, vector<int>> mp;

inline void precompute(int n) {
  a.assign(n+1, 0); b.assign(n+1, 0);
  for (int i=2; i<=n; i++) for (int j=2; j*j<=i; j++) {
    if (i % j) continue;
    a[i] += 1 + (j * j != i);
    if (!b[i]) b[i] = j;
  }
  for (int i=2; i<=n; i++) mp[a[i]].push_back(i);
}

void solve(int idx) {
  int n, m; cin >> n >> m;

  int ans = 0;
  for (int x : mp[a[n]]) {
    if (x >= n) break;
    if (b[x] >= m) ans++;
  }
  cout << "Case #" << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute(1000000);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}