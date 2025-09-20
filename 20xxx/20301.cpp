#include <deque>
#include <iostream>
using namespace std;

void solve(void) {
  int n, k, m; cin >> n >> k >> m;
  deque<int> dq;
  for (int i=1; i<=n; i++) dq.push_back(i);

  int cnt = 0;
  while (!dq.empty()) {
    if ((cnt++ / m) & 1) {
      for (int i=1; i<k; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
      }
      cout << dq.back() << "\n";
      dq.pop_back();
    } else {
      for (int i=1; i<k; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
      }
      cout << dq.front() << "\n";
      dq.pop_front();
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}