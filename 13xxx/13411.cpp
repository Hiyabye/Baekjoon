#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> x(n), y(n), v(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i] >> v[i];

  vector<pair<double, int> > ans(n);
  for (int i=0; i<n; i++) {
    ans[i].first = (double)((x[i]*x[i]) + (y[i]*y[i])) / (double)(v[i]*v[i]);
    ans[i].second = i+1;
  }
  sort(ans.begin(), ans.end());

  for (int i=0; i<n; i++) {
    cout << ans[i].second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}