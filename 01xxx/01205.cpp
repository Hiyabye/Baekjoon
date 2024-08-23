#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, s, p; cin >> n >> s >> p;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 1, pos = 1;
  for (int i=0; i<n; i++) {
    if (v[i] > s) ans++;
    if (v[i] >= s) pos++;
  }
  cout << (pos > p ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}