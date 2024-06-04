#include <iostream>
#include <set>
#include <utility>
using namespace std;

bool check(set<pair<int, int>> a, set<pair<int, int>> b, int dy, int dx) {
  for (auto p : a) {
    if (b.find({p.first + dy, p.second + dx}) == b.end()) return false;
  }
  return true;
}

void solve(void) {
  int m; cin >> m;
  set<pair<int, int>> a;
  while (m--) {
    pair<int, int> p; cin >> p.first >> p.second;
    a.insert(p);
  }

  int n; cin >> n;
  set<pair<int, int>> b;
  while (n--) {
    pair<int, int> p; cin >> p.first >> p.second;
    b.insert(p);
  }

  for (auto p : b) {
    int dy = p.first - a.begin()->first;
    int dx = p.second - a.begin()->second;
    if (check(a, b, dy, dx)) {
      cout << dy << " " << dx;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}