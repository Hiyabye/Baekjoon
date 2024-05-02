#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  int i = 0, j = 0;
  while (i < n && j < m) {
    cout << (a[i] < b[j] ? a[i++] : b[j++]) << "\n";
  }
  while (i < n) cout << a[i++] << "\n";
  while (j < m) cout << b[j++] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}