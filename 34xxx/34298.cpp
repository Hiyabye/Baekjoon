#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int r, s, n; cin >> r >> s >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  if (r == 0) return 0;

  long long sum = 0;
  for (int i=0; i<n; i++) {
    sum += a[i];
    if (sum % s == r % s) return i+1;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}