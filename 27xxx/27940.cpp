#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<int> t(m), r(m);
  for (int i=0; i<m; i++) cin >> t[i] >> r[i];
  if (r[0] > k) {
    cout << "1 1";
    return;
  }

  for (int i=1; i<m; i++) {
    r[i] += r[i-1];
    if (r[i] > k) {
      cout << i+1 << " " << 1;
      return;
    }
  }
  cout << "-1";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}