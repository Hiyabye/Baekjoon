#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<priority_queue<int>> pq(11);
  while (n--) {
    int p, w; cin >> p >> w; p--;
    pq[p].push(w);
  }

  while (k--) {
    for (int j=0; j<11; j++) {
      if (pq[j].empty()) continue;
      int x = pq[j].top(); pq[j].pop();
      if (x) x--;
      pq[j].push(x);
    }
  }

  int ans = 0;
  for (int i=0; i<11; i++) {
    if (pq[i].empty()) continue;
    ans += pq[i].top(); pq[i].pop();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}