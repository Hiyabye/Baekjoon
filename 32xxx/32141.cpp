#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int n, h; cin >> n >> h;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];

  for (int i=0; i<n; i++) {
    h -= d[i];
    if (h <= 0) return i+1;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}