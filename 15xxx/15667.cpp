#include <iostream>
using namespace std;

int solve(void) {
  int n; cin >> n;

  for (int k=1; k*k<=n; k++) {
    if (1 + k + k*k == n) return k; 
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}