#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  for (int i=1; i<n; i++) {
    if (a[i] == 0 && b[i] == 0) return 0;
    if (a[i] == 0 && b[i-1] == 0) return 0;
    if (a[i-1] == 0 && b[i] == 0) return 0;
  }

  for (int i=0; i<n; i++) {
    if (a[i] == 0 || b[i] == 0) return 1;
  }
  return 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}