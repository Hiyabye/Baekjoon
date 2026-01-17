#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

inline bool check(int w1, int h1, int w2, int h2) {
  return w2 >= w1 + 10 && h2 >= h1;
}

void solve(void) {
  vector<int> w(3), h(3);
  for (int i=0; i<3; i++) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    w[i] = min(10 * a + b, 10 * c + d);
    h[i] = max(10 * a + b, 10 * c + d);
  }

  if (check(w[0], h[0], w[1], h[1])) {
    if (check(w[0], h[0], w[2], h[2]) && w[1] >= w[2]) {
      cout << "2\n" << fixed << setprecision(1) << w[2] / 10.0 << " " << h[2] / 10.0;
    } else {
      cout << "1\n" << fixed << setprecision(1) << w[1] / 10.0 << " " << h[1] / 10.0;
    }
  } else if (check(w[0], h[0], w[2], h[2])) {
    cout << "2\n" << fixed << setprecision(1) << w[2] / 10.0 << " " << h[2] / 10.0;
  } else {
    cout << 0;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}