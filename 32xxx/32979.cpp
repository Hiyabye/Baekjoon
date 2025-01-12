#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int t; cin >> t;
  vector<int> a(2*n), b(t);
  for (int i=0; i<2*n; i++) cin >> a[i];
  for (int i=0; i<t; i++) cin >> b[i];

  queue<int> q;
  for (int j=0; j<2*n; j++) q.push(a[j]);
  for (int i=0; i<t; i++) {
    while (--b[i]) q.push(q.front()), q.pop();
    cout << q.front() << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}