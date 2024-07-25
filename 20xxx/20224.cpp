#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];

  int ans = 0;
  for (int i=3; i<n; i++) {
    if (d[i-3] == 2 && d[i-2] == 0 && d[i-1] == 2 && d[i] == 0) ans++;
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}