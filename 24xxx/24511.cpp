#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];
  int m; cin >> m;
  vector<int> c(m);
  for (int i=0; i<m; i++) cin >> c[i];

  queue<int> q;
  for (int i=n-1; i>=0; i--) {
    if (a[i] == 0) q.push(b[i]);
  }

  for (int i=0; i<m; i++) {
    if (q.empty()) cout << c[i] << " ";
    else {
      cout << q.front() << " "; q.pop();
      q.push(c[i]);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}