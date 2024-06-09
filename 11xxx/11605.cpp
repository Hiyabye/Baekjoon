#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool calc(int n, const vector<pair<string, int>> &v, int x) {
  for (int i=0; i<n; i++) {
    if (v[i].first == "ADD") x += v[i].second;
    else if (v[i].first == "SUBTRACT") x -= v[i].second;
    else if (v[i].first == "MULTIPLY") x *= v[i].second;
    else if (x % v[i].second) return true;
    else x /= v[i].second;
    if (x < 0) return true;
  }
  return false;
}

void solve(void) {
  int n; cin >> n;
  vector<pair<string, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;

  int ans = 0;
  for (int i=1; i<=100; i++) {
    ans += calc(n, v, i);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}