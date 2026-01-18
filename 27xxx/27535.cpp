#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

inline string calc1(int n, int b) {
  if (n == 0) return "07H";
  string res = "7H";
  while (n) {
    res = to_string(n % b) + res;
    n /= b;
  }
  return res;
}

inline string calc2(int h, int t, int c, int k, int g) {
  if (!(h | t | c | k | g)) return "NULL";
  vector<pair<int, char>> vec = {
    {-h, 'H'}, {-t, 'T'}, {-c, 'C'}, {-k, 'K'}, {-g, 'G'}
  };
  sort(vec.begin(), vec.end());
  string res;
  for (const auto &[k, v] : vec) if (k) res += v;
  return res;
}

void solve(void) {
  int H, T, C, K, G; cin >> H >> T >> C >> K >> G;
  int m; cin >> m;

  while (m--) {
    int b = (H + T + C + K + G) % 10;
    if (b < 2) b = 10;

    int h; cin >> h; H -= h;
    int t; cin >> t; T -= t;
    int c; cin >> c; C -= c;
    int k; cin >> k; K -= k;
    int g; cin >> g; G -= g;

    cout << calc1(H + T + C + K + G, b) << "\n";
    cout << calc2(H, T, C, K, G) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}