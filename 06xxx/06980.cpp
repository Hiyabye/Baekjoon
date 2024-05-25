#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int l; cin >> l;
  vector<int> v(l);
  for (int i=0; i<l; i++) cin >> v[i];

  int ans = 0;
  for (int i=0; i<l; i++) for (int j=i+1; j<l; j++) {
    if (v[i] > v[j]) ans++;
  }
  cout << "Optimal train swapping takes " << ans << " swaps.\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}