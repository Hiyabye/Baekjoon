#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool cmp1(const pair<string, int> &a, const pair<string, int> &b) {
  return a.second < b.second;
}

bool cmp2(const pair<string, int> &a, const pair<string, int> &b) {
  return a.first < b.first;
}

void solve(void) {
  int n; cin >> n;

  vector<pair<string, int>> ans;
  while (n--) {
    string a, b, c; int d, e;
    cin >> a >> b >> c >> d >> e;
    if (b == "jaehak" && c == "notyet" && (d == -1 || d > 3)) {
      ans.push_back({a, e});
    }
  }

  sort(ans.begin(), ans.end(), cmp1);
  if (ans.size() > 10) ans.resize(10);
  sort(ans.begin(), ans.end(), cmp2);

  cout << ans.size() << "\n";
  for (const auto &p : ans) {
    cout << p.first << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}