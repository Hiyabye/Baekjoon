#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> i(n), p(n), m(n);
  for (int j=0; j<n; j++) cin >> i[j] >> p[j] >> m[j];

  long long ans = 0;
  for (int j=0; j<n; j++) {
    if (p[j] != (j ? i[j-1] : 0)) {
      cout << "INVALID";
      return;
    } else if (ans + m[j] < 0) {
      cout << "NO_MONEY";
      return;
    } else {
      ans += m[j];
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}