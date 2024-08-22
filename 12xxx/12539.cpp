#include <iostream>
#include <vector>
using namespace std;

inline int calc(int m, const vector<int> &p, int a, int b) {
  return m / p[a] * (p[b] - p[a]);
}

void solve(int idx) {
  int m; cin >> m;
  vector<int> p(12);
  for (int i=0; i<12; i++) cin >> p[i];

  int a = 0, b = 1;
  for (int i=0; i<11; i++) for (int j=i+1; j<12; j++) {
    if (calc(m, p, i, j) < calc(m, p, a, b)) continue;
    if (calc(m, p, i, j) > calc(m, p, a, b) || p[i] < p[a]) {
      a = i, b = j;
    }
  }

  cout << "Case #" << idx << ": ";
  if (calc(m, p, a, b) <= 0) cout << "IMPOSSIBLE";
  else cout << a+1 << " " << b+1 << " " << calc(m, p, a, b);
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}