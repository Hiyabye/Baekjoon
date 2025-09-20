#include <deque>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  deque<int> dq;
  for (int i=0; i<n; i++) dq.push_back(0);

  for (int i=1; i<=n; i++) {
    int j = 0;
    while (j < i) {
      dq.push_back(dq.front());
      if (dq.front() == 0) j++;
      dq.pop_front();
    }
    while (dq.front() != 0) {
      dq.push_back(dq.front());
      dq.pop_front();
    }
    dq.push_back(i);
    dq.pop_front();
  }

  while (dq.front() != 1) {
    dq.push_back(dq.front());
    dq.pop_front();
  }
  dq.push_front(dq.back());
  dq.pop_back();

  while (!dq.empty()) {
    cout << dq.front() << " ";
    dq.pop_front();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}