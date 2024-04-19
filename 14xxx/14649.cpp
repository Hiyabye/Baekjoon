#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int p; cin >> p;
  int n; cin >> n;

  vector<int> v(100, 0);
  while (n--) {
    int a; char b; cin >> a >> b;
    if (b == 'L') {
      for (int i=a-2; i>=0; i--) v[i] = (v[i] + 1) % 3;
    } else {
      for (int i=a; i<100; i++) v[i] = (v[i] + 1) % 3;
    }
  }

  double ans = 0.01 * p;
  for (int i=0; i<3; i++) {
    cout << fixed << setprecision(2) << ans * count(v.begin(), v.end(), i) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}