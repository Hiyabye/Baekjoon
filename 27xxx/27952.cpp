#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x; cin >> n >> x;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  long long cur = 0;
  for (int i=0; i<n; i++) {
    cur += b[i];
    if (cur < a[i]) {
      cout << -1;
      return;
    }
  }
  cout << (cur - a[n-1]) / x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}