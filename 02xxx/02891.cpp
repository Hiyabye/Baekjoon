#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, s, r; cin >> n >> s >> r;
  vector<int> v(n+2, 1); v[0] = v[n+1] = 0;
  while (s--) {
    int x; cin >> x;
    v[x]--;
  }
  while (r--) {
    int x; cin >> x;
    v[x]++;
  }

  for (int i=1; i<=n; i++) {
    if (v[i] != 0) continue;
    if (v[i-1] == 2) v[i-1] = v[i] = 1;
    else if (v[i+1] == 2) v[i+1] = v[i] = 1;
  }

  int ans = 0;
  for (int i=1; i<=n; i++) {
    if (v[i] == 0) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}