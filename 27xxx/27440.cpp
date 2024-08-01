#include <iostream>
#include <queue>
#include <unordered_set>
#include <utility>
using namespace std;

int solve(void) {
  long long n; cin >> n;

  queue<pair<long long, int>> q; q.push({n, 0});
  unordered_set<long long> v; v.insert(n);

  while (!q.empty()) {
    auto [u, cnt] = q.front(); q.pop();
    if (u == 1) return cnt;
    if (!(u % 3) && v.find(u/3) == v.end()) {
      v.insert(u/3);
      q.push({u/3, cnt+1});
    }
    if (!(u % 2) && v.find(u/2) == v.end()) {
      v.insert(u/2);
      q.push({u/2, cnt+1});
    }
    if (v.find(u-1) == v.end()) {
      v.insert(u-1);
      q.push({u-1, cnt+1});
    }
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}