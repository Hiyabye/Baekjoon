#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
  return abs(a) < abs(b);
}

int solve(void) {
  int t, n; cin >> t >> n;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];
  sort(x.begin(), x.end(), cmp);

  t -= abs(x[0]);
  for (int i=1; i<n; i++) {
    int d = abs(x[i] - x[i-1]);
    if (t < d) return i;
    t -= d;
  }
  return n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}