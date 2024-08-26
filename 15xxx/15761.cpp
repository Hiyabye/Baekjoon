#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> w(n);
  for (int i=0; i<n; i++) cin >> w[i];
  sort(w.begin(), w.end(), greater<int>());

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (w[i] < ans) break;
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}