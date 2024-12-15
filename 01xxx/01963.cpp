#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

inline vector<int> precompute(void) {
  vector<bool> p(10000, true);
  for (int i=2; i*i<=9999; i++) {
    if (p[i]) for (int j=i*i; j<=9999; j+=i) p[j] = false;
  }

  vector<int> ret;
  for (int i=1000; i<=9999; i++) if (p[i]) ret.push_back(i);
  return ret;
}

void solve(const vector<int> &p) {
  int a, b; cin >> a >> b;

  queue<pair<int, int>> q; q.push({a, 0});
  vector<bool> visited(10000, false);

  while (!q.empty()) {
    auto [cur, cnt] = q.front(); q.pop();
    if (cur == b) {
      cout << cnt << "\n";
      return;
    }
    visited[cur] = true;

    for (int i=1; i<=9; i++) {
      if (cur / 1000 == i) continue;
      int nxt = i * 1000 + cur % 1000;
      if (visited[nxt]) continue;
      if (binary_search(p.begin(), p.end(), nxt)) q.push({nxt, cnt+1});
    }
    for (int i=0; i<=9; i++) {
      if (cur / 100 % 10 == i) continue;
      int nxt = (cur / 1000) * 1000 + i * 100 + cur % 100;
      if (visited[nxt]) continue;
      if (binary_search(p.begin(), p.end(), nxt)) q.push({nxt, cnt+1});
    }
    for (int i=0; i<=9; i++) {
      if (cur / 10 % 10 == i) continue;
      int nxt = (cur / 100) * 100 + i * 10 + cur % 10;
      if (visited[nxt]) continue;
      if (binary_search(p.begin(), p.end(), nxt)) q.push({nxt, cnt+1});
    }
    for (int i=0; i<=9; i++) {
      if (cur % 10 == i) continue;
      int nxt = (cur / 10) * 10 + i;
      if (visited[nxt]) continue;
      if (binary_search(p.begin(), p.end(), nxt)) q.push({nxt, cnt+1});
    }
  }
  cout << "Impossible\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> p = precompute();

  int t; cin >> t;
  while (t--) solve(p);
  return 0;
}