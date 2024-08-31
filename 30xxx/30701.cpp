#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  long long n, d; cin >> n >> d;
  vector<int> m, e;
  while (n--) {
    int a, x; cin >> a >> x;
    if (a == 1) m.push_back(x);
    else e.push_back(x);
  }
  sort(m.begin(), m.end());
  sort(e.begin(), e.end());

  int ans = 0;
  for (int i=0, j=0; i<m.size() || j<e.size(); ans++) {
    if (i == m.size()) j++;
    else if (d > m[i]) d += m[i++];
    else if (j == e.size()) break;
    else d *= e[j++];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}