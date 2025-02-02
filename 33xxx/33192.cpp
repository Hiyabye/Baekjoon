#include <iostream>
#include <string>
using namespace std;

inline string format(int x) {
  string ret = to_string(x);
  for (int i=ret.size()-3; i>0; i-=3) {
    ret.insert(i, ",");
  }
  return ret;
}

void solve(void) {
  int x, k, h; cin >> x >> k >> h;

  int ans = h * x * 2; k -= h;
  if (k > 140) {
    ans += 140 * x;
    ans += (k - 140) * x * 3 / 2;
  } else {
    ans += k * x;
  }
  cout << format(ans) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}