#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> f(46, 1);
  for (int i=2; i<=45; i++) {
    f[i] = f[i-1] + f[i-2];
  }

  int n; cin >> n;
  while (n--) {
    int x; cin >> x;
    cout << f[x] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}