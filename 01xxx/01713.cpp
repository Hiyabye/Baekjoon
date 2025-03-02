#include <algorithm>
#include <deque>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

inline int search(const deque<pair<int, int>> &dq, int x) {
  for (int i=0; i<dq.size(); i++) {
    if (dq[i].first == x) return i;
  }
  return -1;
}

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;

  deque<pair<int, int>> dq;
  while (k--) {
    int x; cin >> x;
    int idx = search(dq, x);
    if (idx != -1) {
      dq[idx].second++;
    } else if (dq.size() < n) {
      dq.push_back({x, 1});
    } else {
      int min_idx = 0;
      for (int j=1; j<n; j++) {
        if (dq[j].second < dq[min_idx].second) {
          min_idx = j;
        }
      }
      dq.erase(dq.begin() + min_idx);
      dq.push_back({x, 1});
    }
  }

  vector<int> ans;
  for (int i=0; i<n; i++) {
    if (dq[i].first == 0) continue;
    ans.push_back(dq[i].first);
  }
  sort(ans.begin(), ans.end());

  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}