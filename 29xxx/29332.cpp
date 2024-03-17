#include <algorithm>
#include <iostream>
#define INF 1e18
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long x_min = INF, x_max = -INF, y_max = -INF, y_min = INF;
  while (n--) {
    long long x, y; char d; cin >> x >> y >> d;
    switch (d) {
      case 'L': x_min = min(x_min, x); break;
      case 'R': x_max = max(x_max, x); break;
      case 'U': y_max = max(y_max, y); break;
      case 'D': y_min = min(y_min, y); break;
    }
  }

  if (x_min == INF || x_max == -INF || y_min == INF || y_max == -INF) {
    cout << "Infinity";
  } else {
    cout << (x_min-x_max-1) * (y_min-y_max-1);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}