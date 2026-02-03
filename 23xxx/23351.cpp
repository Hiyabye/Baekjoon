#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, a, b; cin >> n >> k >> a >> b;
  vector<int> v(n, k);

  int ans = 0;
  while (*min_element(v.begin(), v.end()) > 0) {
    for (int i=0; i<a; i++) v[(ans * a + i) % n] += b;
    for (int i=0; i<n; i++) v[i]--;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}