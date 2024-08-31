#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i], b[i] = a[i];
  sort(b.begin(), b.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (a[i] != b[i]) ans++;
  }
  cout << max(0, --ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}