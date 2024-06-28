#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<int> inc(n, 1), dec(n, 1);
  for (int i=1; i<n; i++) {
    if (v[i-1] <= v[i]) inc[i] = inc[i-1] + 1;
    if (v[i-1] >= v[i]) dec[i] = dec[i-1] + 1;
  }
  cout << max(*max_element(inc.begin(), inc.end()), *max_element(dec.begin(), dec.end()));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}