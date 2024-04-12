#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int t, d, m; cin >> t >> d >> m;
  if (m == 0) return d >= t;
  vector<int> y(m);
  for (int i=0; i<m; i++) cin >> y[i];

  if (y[0] >= t) return true;
  for (int i=1; i<m; i++) {
    if (y[i] - y[i-1] >= t) return true;
  }
  return d - y[m-1] >= t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 'Y' : 'N');
  return 0;
}