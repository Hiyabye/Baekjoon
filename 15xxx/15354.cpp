#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<char> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 2;
  for (int i=1; i<n; i++) {
    if (v[i] != v[i-1]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}