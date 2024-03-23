#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0;
  for (int i=0; i<n; i++) {
    int r; cin >> r;
    ans += r;
  }
  cout << "Mary won " << n - ans << " times and John won " << ans << " times\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}