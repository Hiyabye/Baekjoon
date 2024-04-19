#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  reverse(a.begin(), a.end());

  deque<int> dq;
  for (int i=0; i<n; i++) {
    if (a[i] == 1) {
      dq.push_front(i+1);
    } else if (a[i] == 2) {
      int tmp = dq.front();
      dq.pop_front();
      dq.push_front(i+1);
      dq.push_front(tmp);
    } else {
      dq.push_back(i+1);
    }
  }

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