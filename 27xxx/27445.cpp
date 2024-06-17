#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i]; b[0] = a[0];
  for (int i=1; i<m; i++) cin >> b[i];

  int r = distance(a.begin(), min_element(a.begin(), a.end())) + 1;
  int c = *min_element(a.begin(), a.end()) + 1;
  cout << r << " " << c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}