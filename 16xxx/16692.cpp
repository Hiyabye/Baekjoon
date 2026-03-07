#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
using pii = pair<int, int>;

inline void time_pass(priority_queue<pii, vector<pii>, greater<pii>> &pq, int t) {
  vector<pii> tmp;
  while (!pq.empty()) {
    tmp.push_back(pq.top()); pq.pop();
  }
  for (pii &p : tmp) {
    p.first -= t;
    pq.push(p);
  }
}

void solve(void) {
  int n, c; cin >> n >> c;
  vector<int> t(c);
  for (int i=0; i<c; i++) cin >> t[i];

  priority_queue<pii, vector<pii>, greater<pii>> pq;
  for (int i=0; i<n; i++) {
    pq.push({t[i], i+1});
    cout << i+1 << " ";
  }

  for (int i=n; i<c; i++) {
    pii cur = pq.top(); pq.pop();
    time_pass(pq, cur.first);
    cout << cur.second << " ";
    pq.push({t[i], cur.second});
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}