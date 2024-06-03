#include <iostream>
#include <vector>
using namespace std;

inline int calc(int a, int b, int c) {
  return 2 * (a*b + b*c + c*a);
}

void solve(void) {
  int n; cin >> n;

  vector<int> ans(3, 1e4);
  for (int i=1; i*i*i<=n; i++) {
    for (int j=i; i*j*j<=n; j++) {
      if (n % (i*j)) continue;
      int k = n / (i*j);
      if (calc(i, j, k) < calc(ans[0], ans[1], ans[2])) {
        ans[0] = i; ans[1] = j; ans[2] = k;
      }
    }
  }
  cout << ans[0] << " " << ans[1] << " " << ans[2];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}