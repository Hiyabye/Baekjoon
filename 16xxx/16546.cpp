#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;

  vector<bool> v(n+1, true);
  for (int i=1; i<n; i++) {
    int x; cin >> x;
    v[x] = false;
  }

  for (int i=1; i<=n; i++) {
    if (v[i]) return i;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}