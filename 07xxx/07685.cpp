#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> k(n);
  for (int i=0; i<n; i++) cin >> k[i];

  int x = 0;
  for (int i=0; i<n; i++) x ^= k[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if ((x ^ k[i]) < k[i]) ans++;
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