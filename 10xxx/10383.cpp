#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<pair<string, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first, v[i].second = i;
  sort(v.begin(), v.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += abs(v[i].second - i);
  }
  cout << "Site " << idx << ": " << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}