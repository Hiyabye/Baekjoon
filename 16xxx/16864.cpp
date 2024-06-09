#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  double pt, p1, p2; cin >> pt >> p1 >> p2;
  int t = (pt + 0.005) * 100;
  int a = (p1 + 0.005) * 100;
  int b = (p2 + 0.005) * 100;

  vector<pair<int, int>> ans;
  for (int i=0; i<=t; i+=a) {
    if ((t-i) % b) continue;
    ans.push_back({i/a, (t-i)/b});
  }

  if (ans.empty()) {
    cout << "none";
    return;
  }

  for (auto p : ans) {
    cout << p.first << " " << p.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}