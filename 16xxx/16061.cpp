#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, d, k; cin >> n >> d >> k;
  vector<pair<int, string>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].second >> v[i].first;
  sort(v.begin(), v.end(), greater<pair<int, string>>());

  vector<string> ans;
  for (int i=0; d>0 && k>0; i++, k--) {
    d -= v[i].first;
    ans.push_back(v[i].second);
  }

  if (d > 0) {
    cout << "impossible";
    return;
  }

  cout << ans.size() << "\n";
  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << ", YOU ARE FIRED!\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}