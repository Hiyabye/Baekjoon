#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> a(n);
  for (int i=0; i<n; i++) cin >> a[i].first, a[i].second = i+1;
  sort(a.begin(), a.end(), greater<pair<int, int>>());

  vector<pair<int, int>> ans;
  while (a[1].first) {
    ans.push_back({a[0].second, a[1].second});
    a[0].first--; a[1].first--;
    sort(a.begin(), a.end(), greater<pair<int, int>>());
  }

  if (a[0].first) {
    cout << "no";
  } else {
    cout << "yes\n";
    for (auto [i, j] : ans) {
      cout << i << " " << j << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}