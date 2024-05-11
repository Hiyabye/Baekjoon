#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i];

  pair<int, int> ans = {0, 0};
  for (int i=0; i<n-1; i++) for (int j=i+1; j<n; j++) {
    if (hypot(x[ans.first]-x[ans.second], y[ans.first]-y[ans.second]) < hypot(x[i]-x[j], y[i]-y[j])) {
      ans = {i, j};
    }
  }
  cout << ans.first + 1 << " " << ans.second + 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}