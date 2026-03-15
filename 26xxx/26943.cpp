#include <deque>
#include <iostream>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  deque<int> dq;
  for (int i=1; i<n; i++) dq.push_back(i);

  for (int i=0; i<m-1; i++) {
    dq.push_front(dq.back()); dq.pop_back();
  }
  dq.push_back(n);

  for (int i=0; i<n/2; i++) {
    cout << dq[i] << "-" << dq[n-i-1] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}