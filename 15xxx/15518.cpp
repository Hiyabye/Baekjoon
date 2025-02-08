#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, h, w; cin >> n >> h >> w;
  vector<int> x(n);
  for (int i=0; i<n; i++) cin >> x[i];

  int ans = 0;
  for (int i=1; i<n; i+=2) {
    if (x[i] + x[i-1] <= w) {
      ans += (x[i] + x[i-1]) * h;
    } else {
      ans += (2 * w - x[i] - x[i-1]) * h;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}