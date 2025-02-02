#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, s; cin >> n >> s;
  vector<int> l(n);
  for (int i=0; i<n; i++) cin >> l[i];
  sort(l.begin(), l.end());

  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += max<int>(0, distance(l.begin()+i+1, upper_bound(l.begin(), l.end(), s-l[i])));
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}