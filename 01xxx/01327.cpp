#include <algorithm>
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

struct hash_fn {
  size_t operator()(const vector<int>& v) const {
    size_t h = 0;
    for (int x : v) {
      h = h * 31 + x;
    }
    return h;
  }
};

int solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  queue<vector<int>> q;
  unordered_map<vector<int>, int, hash_fn> mp;
  q.push(v); mp[v] = 0;

  while (!q.empty()) {
    auto cur = q.front(); q.pop();
    if (is_sorted(cur.begin(), cur.end())) return mp[cur];
    for (int i=0; i<=n-k; i++) {
      vector<int> nxt = cur;
      reverse(nxt.begin()+i, nxt.begin()+i+k);
      if (mp.find(nxt) == mp.end()) {
        mp[nxt] = mp[cur] + 1;
        q.push(nxt);
      }
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