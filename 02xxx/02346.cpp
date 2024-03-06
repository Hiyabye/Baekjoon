#include <deque>
#include <iostream>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;

  deque<pair<int, int>> dq;
  for (int i=1; i<=n; i++) {
    int x; cin >> x;
    dq.push_back(make_pair(i, x));
  }

  while (!dq.empty()) {
    auto [i, x] = dq.front();
    cout << i << " ";
    dq.pop_front();

    if (dq.empty()) break;
    if (x > 0) {
      x--;
      while (x--) {
        dq.push_back(dq.front());
        dq.pop_front();
      }
    } else {
      while (x++) {
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}