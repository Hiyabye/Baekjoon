#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, w; cin >> n >> w;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0, sum = 0;
  for (int i=0; i<n; i++) {
    sum += a[i];
    if (sum >= w) {
      ans++;
      sum = 0;
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