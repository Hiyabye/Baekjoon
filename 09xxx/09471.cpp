#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<int> f;
  f.push_back(0);
  f.push_back(1);
  f.push_back(1);

  int ans = 2;
  while (f[ans] != 0 || f[ans-1] != 1) {
    f.push_back((f[ans] + f[ans-1]) % m);
    ans++;
  }
  cout << n << " " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  while (p--) solve();
  return 0;
}