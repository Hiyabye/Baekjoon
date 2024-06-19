#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, p, q; cin >> n >> p >> q;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  vector<int> ans(n, 0);
  for (int i=0; i<n; i++) {
    for (int j=0; j<=10000; j++) {
      if (a[i] + j*p == b[i] + j*q) {
        a[i] = b[i] = 0;
        ans[i] = j;
        break;
      }
    }
    if (a[i] != b[i]) return false;
  }

  cout << "YES\n";
  for (int i=0; i<n; i++) cout << ans[i] << " ";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "" : "NO");
  return 0;
}