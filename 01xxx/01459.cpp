#include <iostream>
using namespace std;

void solve(void) {
  long long x, y, w, s; cin >> x >> y >> w >> s;

  if (2*w <= s) cout << (x+y)*w;
  else if (w < s) cout << min(x, y)*s + abs(x-y)*w;
  else if ((x+y) & 1) cout << (max(x, y)-1)*s + w;
  else cout << max(x, y)*s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}