#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];

  int ans = accumulate(w.begin(), w.end(), 0);
  cout << (ans > 0 ? "Right" : ans < 0 ? "Left" : "Equilibrium") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}