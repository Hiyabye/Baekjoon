#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  int x = 0;
  for (int i=0; i<n; i++) x ^= p[i];

  int ans = 0;
  for (int i=0; i<n; i++) {
    if ((x ^ p[i]) < p[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}