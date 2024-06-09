#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int avg = 0;
  for (int i=0; i<n; i++) avg += a[i];
  avg /= n;

  int ans = 0;
  for (int i=0; i<n; i++) ans += (a[i] <= avg);
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}