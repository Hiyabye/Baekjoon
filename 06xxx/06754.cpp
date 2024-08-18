#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int w; cin >> w;
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int cur = 0;
  for (int i=0; i<4 && i<n; i++) {
    cur += v[i];
    if (cur > w) return i;
  }

  for (int i=4; i<n; i++) {
    cur += v[i] - v[i-4];
    if (cur > w) return i;
  }
  return n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}