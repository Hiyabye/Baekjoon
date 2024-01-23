#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  int ans = accumulate(t.begin(), t.end(), 0) + 8*(n-1);
  cout << ans / 24 << " " << ans % 24;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}