#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

bool solve(void) {
  unsigned int x, y; cin >> x >> y;

  queue<unsigned int> q;
  unordered_set<unsigned int> s;
  q.push(x); s.insert(x);

  while (!q.empty()) {
    unsigned int cur = q.front(); q.pop();
    if (cur == y) return true;

    if (s.find(cur << 1) == s.end()) {
      q.push(cur << 1);
      s.insert(cur << 1);
    }
    if (s.find(cur >> 1) == s.end()) {
      q.push(cur >> 1);
      s.insert(cur >> 1);
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}