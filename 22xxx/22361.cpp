#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  if (n == 0 && m == 0) return false;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  vector<int> ans(10, 0);
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      int x = a[i] * b[j];
      while (x) {
        ans[x % 10]++;
        x /= 10;
      }
    }
  }

  for (int i=0; i<10; i++) {
    cout << ans[i] << " ";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}