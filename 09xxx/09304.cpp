#include <iostream>
#include <queue>
#include <vector>
using namespace std;

inline bool check(double ax, double ay, double ar, double bx, double by, double br) {
  return (ax-bx)*(ax-bx) + (ay-by)*(ay-by) <= (ar+br)*(ar+br);
}

bool solve(int idx) {
  int h, w, n; cin >> h >> w >> n;
  vector<double> x(n), y(n), r(n);
  for (int i=0; i<n; i++) cin >> x[i] >> y[i] >> r[i];

  queue<int> q;
  vector<bool> visited(n, false);
  for (int i=0; i<n; i++) {
    if (y[i] + r[i] < h) continue;
    visited[i] = true;
    q.push(i);
  }

  while (!q.empty()) {
    int c = q.front(); q.pop();
    if (y[c] <= r[c]) return false;
    for (int i=0; i<n; i++) {
      if (visited[i] || !check(x[c], y[c], r[c], x[i], y[i], r[i])) continue;
      visited[i] = true;
      q.push(i);
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) cout << "Case " << i << ": " << (solve(i) ? "Clear To Go" : "Find Another Path") << "\n";
  return 0;
}