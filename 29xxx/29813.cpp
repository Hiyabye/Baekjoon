#include <deque>
#include <iostream>
#include <string>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;
  deque<pair<string, int>> dq;
  while (n--) {
    string s; int x; cin >> s >> x;
    dq.push_back({s, x});
  }

  while (dq.size() > 1) {
    auto [s1, x1] = dq.front(); dq.pop_front();
    while (--x1 != 0) {
      auto [s2, x2] = dq.front(); dq.pop_front();
      dq.push_back({s2, x2});
    }
    auto [s2, x2] = dq.front(); dq.pop_front();
  }
  cout << dq.front().first;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}